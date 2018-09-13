#include <bits/stdc++.h>

using namespace std;

int main() {
	int N,K; int sum = 0;int sum1 = 0; int a = 0,b = 0; int max = 0;
	cin>>N>>K;
	int **A = new int* [N+1]; // две строки в массиве
        for (int count = 0; count < N+1; count++)
        A[count] = new int [N+1];
	
	for (int i = 1; i <=N;i++) for (int j = 1; j <=N;j++) A[i][j] = 0;
	while (1) {
	cin>>a; cin>>b;
	A[a][b] = 1;
	A[b][a] = 0;
	if ((a==0) || (b==0)) break;
	}		
	
	for (int i = 1; i <=N;i++) {
	for (int j = 1; j <=N;j++) cout<<A[i][j];
	cout<<endl;
	}
	cout<<endl;
	
	for (int j = 1; j <=N;j++) sum = sum + A[K][j];
	
	for (int i = 1; i <=N;i++) {
	sum1 = 0;
	for (int j = 1; j <=N;j++) sum1 = sum1 + A[i][j];
	if (sum1>max) max = sum1;
	}
	cout<<sum<<endl;
	cout<<max<<endl;
	//if (sum==max) cout<<"Yes"; else cout<<"No";

	
	for (int count = 0; count < N; count++)
        delete [] A[count];
	

	return 0;
}