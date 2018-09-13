#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"

using namespace std;

bool func(int x, int y) {
	return x>y;
	}

int main() {
	int N; int sum1=0; int sum2=0;
	cin>>N;
	int A[N];
	for (int i = 0; i < N; i++) cin>>A[i];
	sort(A,A+N,func);
	for (int i = 0; i < N/2; i++) sum1=sum1+A[i];
	for (int i = N/2; i < N; i++) sum2=sum2+A[i];
	cout<<sum1-sum2;
	return 0;	
}