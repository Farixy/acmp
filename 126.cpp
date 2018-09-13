#include <bits/stdc++.h>

using namespace std;

int main() {
	int N; int temp = 0;  int min = 1000000; int temp1;
	cin>>N;
	int **A = new int* [N+1]; // две строки в массиве
        for (int count = 0; count < N+1; count++)
        A[count] = new int [N+1];
	
	for (int i = 1; i <=N;i++) for (int j = 1; j <=N;j++) cin>>A[i][j]; 

	for (int i = 1; i <=N;i++) 
	for (int j = 1; j <=N;j++) 
	for (int l = 1; l <=N;l++) if ((i!=j) && (l!=i) && (l!=j)) {
	temp = A[i][j]+A[j][l]+A[l][i];
	if (temp<min) min = temp;
	}

	/*
	for (int i = 1; i <=N;i++) {
	for (int j = 1; j <=N;j++) cout<<A[i][j];
	cout<<endl;
	}
	*/

	cout<<min;
	
	for (int count = 0; count < N; count++)
        delete [] A[count];
	

	return 0;
}