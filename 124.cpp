#include <bits/stdc++.h>

using namespace std;

int main() {
	int N,M; int a,b; int sum = 0;
	cin>>N>>M;
	int **A = new int* [N+1]; // две строки в массиве
        for (int count = 0; count < N+1; count++)
        A[count] = new int [N+1];
	for (int i = 1; i <=N;i++) for (int j = 1; j <=N;j++) A[i][j] = 0;
	
	for (int i = 1; i <= M;i++) {
	cin>>a;
	cin>>b;
	A[a][b] = 1;
	A[b][a] = 1;
	}
	for (int i = 1; i <=N;i++) {
	sum = 0;
	for (int j = 1; j <=N;j++) sum = sum + A[i][j];
	cout<<sum<<endl;
	}
	for (int count = 0; count < N; count++)
        delete [] A[count];
	

	return 0;
}