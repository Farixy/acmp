#include <bits/stdc++.h>

using namespace std;

long long powMod(long long a, long long b,long long p) {
    long long y = 1;
    while (b) {
        if (b & 1) y = (y*a) % p; 
        b = b >> 1; 
        a = (a*a) % p;  
    }
    return y;
}
 
long long evklid_nod(long long a, long long b) {
    long long temp;
    if (b>a) { temp=a; a=b; b=temp; }
    long long q=0;
    long long U[]={a,1,0}, V[]={b,0,1}, T[]={0,0,0};
    while (V[0]!=0) {
        q = U[0]/V[0];
        T[0]=U[0]-q*V[0]; T[1]=U[1]-q*V[1]; T[2]=U[2]-q*V[2];
        U[0]=V[0]; U[1]=V[1]; U[2]=V[2]; 
        V[0]=T[0]; V[1]=T[1]; V[2]=T[2];
    }
    return U[0];
}
 
bool test_Ferma(long long p) { 
    if (p==0) return false;
    if (p==1) return false;
    long long a,b;
    for (int i = 0;i < 100;i++) {
    a = rand()%p+1;
    while(1) if (a % p == 0) a = rand(); else break;
    b = powMod(a,(p-1),p); 
    if (evklid_nod(a,p)!=1) return false;
    if (b!=1) return false;
    }
    return true;
}


int main() {
	int min = 100000; int result = 0; int temp1; int temp2;
	long long N;
	cin>>N;
	if ((N % 2)==0) { cout<<N/2<<" "<<N/2; return 0;}
	if ((test_Ferma(N))==1) { cout<<"1"<<" "<<N-1; return 0;}
	for (int i = 3; i <= sqrt(N);i++) {
	if ((N % i) == 0) if ((i % 2) == 1) if (min>i) min = i;
	}
	cout<<N/min<<" "<<N-(N/min);
	
	/*
	for (int a = 1; a < 90000; a++)
	for (int b = 1; b < 90000; b++){
	if ((a+b)==N) {
	result = evklid_nod(a,b);
	if (max<result) { max = result; temp1 = a; temp2 = b;  }
	}
	}
	cout<<temp1<<" "<<temp2;
 	*/
	return 0;
}