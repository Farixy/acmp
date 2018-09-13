#include <bits/stdc++.h>

using namespace std;

long long mul(long long a, long long b, long long m){
	if(b==1)
		return a;
	if(b%2==0){
		long long t = mul(a, b/2, m);
		return (2 * t) % m;
	}
	return (mul(a, b-1, m) + a) % m;
}

long long pows(long long a, long long b,long long p) {
    long long y = 1;
    while (b) {
        if (b & 1) y = (y*a) % p; 
        b = b >> 1; 
        a = (a*a) % p;  
	}
    return y;
}


long long gcd(long long a, long long b){
	if(b==0)
		return a;
	return gcd(b, a%b);
}

bool ferma(long long x){
	if(x == 1) return false;
	if(x == 2)
		return true;
	srand(time(NULL));
	for(int i=0;i<10;i++){
		long long a = (rand() % (x - 2)) + 2;
		if (gcd(a, x) != 1)
			return false;			
		if( pows(a, x-1, x) != 1)		
			return false;			
	}
	return true;
}

    
int main(){
	int k; int count1 = 1; int count2 = 1; long long p[500]; long long pp[500];
	cin>>k;
        for (int i = 1; i < 6000;i++){
	if (ferma(i)==1) { p[count1]=i; count1++; }
	}
	for (int i = 1; i < 500;i++){
	if ((ferma(i)==1)) { pp[count2] = p[i]; count2++; }
	}
	//for (long long i = 1; i < 500; i++) cout<<pp[i]<<" ";
	//cout<<pp[k];
	cout<<p[p[k]];
	return 0;
	
}