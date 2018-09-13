#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(){
	int K,N;int r;
	cin>>K>>N;
	int A[N];
	for (int i = 0; i < N; i++) A[i]=0;
	for (int i = 0; i < N; i++){
	r = K;
	if (i<r) r = i;
	A[i]=0;
	for (int j = 1; j < r; j++){
	A[i]=A[i]+A[i-j];
	} 
	}
	for (int i = 0; i < N; i++) cout<<A[i]<<" ";
	return 0;
}