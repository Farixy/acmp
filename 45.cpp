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
	srand(time(NULL));
	int size = 10000; int count = 0; int count1 = 0; long long result = 1;
	int *A = new int[size];
	int j = 0;
	long long N;
	cin>>N;
	if (N==4) {cout<<"2*2"; return 0;}
	if (N==8) {cout<<"2*2*2"; return 0;}
	if (N==9) {cout<<"3*3"; return 0;}
	for (int i = 1; i < sqrt(N)+10; i++) {
	if (test_Ferma(i)==1) { A[j] = i; j++; count++;}  
	}
	for (int i = 0; i < count; i++) {
	if ((N % A[i]) == 0) {
	result = result * A[i];
	}
	}
	if (result==N) {
	result = 1;
	for (int i = 0; i < count; i++) {
	if ((N % A[i]) == 0) {
	result = result * A[i];
        if (result == N) cout<<A[i]; else cout<<A[i]<<"*";
	}	
	}
	} else cout<<N;
	//for (int i = 0; i < 1000; i++) cout<<A[i]<<" ";
 	delete [] A;

	return 0;
}