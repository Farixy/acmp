#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"

using namespace std;

int main() {
	int N; int count1=0;
	cin>>N;
	int A[N];
	for (int i = 0; i < N; i++) cin>>A[i];
	sort(A,A+N);
	for (int i = 0; i < (N/2)+1; i++) {
	if (A[i]==1) count1++; else if (A[i]==2) count1 = count1 + 2; else count1 = count1+ ((A[i]/2)+1);
	}
	cout<<count1;
	return 0;	
}