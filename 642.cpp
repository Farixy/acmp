#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"

using namespace std;

int main() {
	long long N,S; int count1=0;
	cin>>N;
	cin>>S;	
	long long A[N];
	for (int i = 0; i < N; i++) cin>>A[i];
	sort(A,A+N);
	for (int i = 0; i < N; i++) { if (S>=A[i]) { S = S - A[i]; count1++;} }
        cout<<count1;
        return 0;	
}