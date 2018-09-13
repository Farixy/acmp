#include <iostream>

using namespace std;

int main() {
	int N,M; int count1 = 0; int Y,X;
	int A[50][50];
	cin>>N>>M>>Y>>X;
	for (int i = 0; i < N; i++) {
	if (i%2==0) for (int j = 0; j < M; j++) {
	        A[i][j]=count1++;
		} else for (int j = M-1; j >= 0; j--) {
		A[i][j]=count1++;
		}
	} 
	cout<<A[Y-1][X-1];
	return 0;
}