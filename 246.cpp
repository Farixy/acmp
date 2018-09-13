#include <bits/stdc++.h>

using namespace std;

int main() {
	int N; int count1 = 0;
	cin>>N;
	int A[N];
	for (int i = 0; i < N; i++) A[i] = 0;
	for (int i = 0; i < N; i++) cin>>A[i];
	for (int i = 0; i < N; i++) {
	if ((A[i]+1)!=(A[i+1])) count1++;
	}
	cout<<count1-1;
	return 0;
}