#include <iostream>
#include <stdlib.h>

using namespace std;

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

int main(){
	int N,M;
	cin>>N>>M;
	
	/*
	for (int i = 0; i < N; i++) cout<<A[i];
	cout<<endl;
	for (int i = 0; i < M; i++) cout<<B[i];
	*/
	for (int i = 0; i < evklid_nod(N,M); i++) cout<<"1";
	
	return 0;
}