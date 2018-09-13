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

long long pows(long long a, long long b, long long m){
	if(b==0)
		return 1;
	if(b%2==0){
		long long t = pows(a, b/2, m);
		return mul(t , t, m) % m;
	}
	return ( mul(pows(a, b-1, m) , a, m)) % m;
}

long long gcd(long long a, long long b){
	if(b==0)
		return a;
	return gcd(b, a%b);
}

long long IsPrime(long long N) {
	for (long long i = 2; i*i <= N; i++) {
	if ((abs(N) % i)==0) return 0;
	}
	return N;	
}

int ferma(long long x){
	if(x == 2)
		return x;
	srand(time(NULL));
	for(int i=0;i<100;i++){
		long long a = (rand() % (x - 2)) + 2;
		if (gcd(a, x) != 1)
			return 0;			
		if( pows(a, x-1, x) != 1)		
			return 0;			
	}
	return x;
}


int main() {
	int a,b,c; long long res = 0;
	cin>>a>>b>>c;
	if ((IsPrime(a)!=0) && (a>=2)) res+=a;
	if ((IsPrime(b)!=0) && (b>=2)) res+=b;
	if ((IsPrime(c)!=0) && (c>=2)) res+=c;
	cout<<res<<endl;
	if (IsPrime(res)!=0) cout<<"Yes"; else cout<<"No"; 
	return 0;
}