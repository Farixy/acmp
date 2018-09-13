#include <bits/stdc++.h>

using namespace std;

void check(int n, int *A) {
	int res;
	while(1) {
	if (n == 0) break;
	res = n % 10;
	A[res]+=1;
	n = n / 10;
	}
}

int main() {
	int number[10];
	int N,M;
	cin>>N>>M;
	int **A = new int* [N+1]; // две строки в массиве
    	for (int count = 0; count < N+1; count++)
        A[count] = new int [M+1];
	

	for (int i = 0; i < 10; i++) number[i] = 0;
	
	for (int i = 1; i <= N; i++)
	for (int j = 1; j <= M; j++) A[i][j] = i * j;
	for (int i = 1; i <= N; i++)
	for (int j = 1; j <= M; j++) check(A[i][j],number);
	for (int i = 0; i < 10; i++) cout<<number[i]<<endl;
	
	for (int count = 0; count < N; count++)
        delete [] A[count];
        
	//check(1234567890,number);
	//for (int i = 0; i < 10; i++) cout<<number[i]<<" ";
	return 0;
}