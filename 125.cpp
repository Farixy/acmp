#include <bits/stdc++.h>

using namespace std;

int main() {
	int N; int count = 0;
	int B[105];
	cin>>N;
	int **A = new int* [N+1]; // две строки в массиве
        for (int count = 0; count < N+1; count++)
        A[count] = new int [N+1];
	
	for (int i = 1; i <=N;i++) for (int j = 1; j <=N;j++) cin>>A[i][j];
	for (int i = 1; i <=N;i++) cin>>B[i];

	
	for (int i = 1; i <=N;i++) for (int j = 1; j <=N;j++) if (i==j) A[i][j]=B[i]; 

	for (int i = 1; i <=N;i++) for (int j = 1; j <=N;j++) if ((i!=j) && (A[i][j]==1)) {
	if (A[i][i]!=A[j][j]) count++;
	}

	/*
	for (int i = 1; i <=N;i++) {
	for (int j = 1; j <=N;j++) cout<<A[i][j];
	cout<<endl;
	}
	*/

	cout<<count/2;
	
	for (int count = 0; count < N; count++)
        delete [] A[count];
	

	return 0;
}