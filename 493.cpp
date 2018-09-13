#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int N,M;    int count = 0;
	char A[110][110];
	cin>>N>>M;
	for (int i = 1; i <= N;i++) for (int j = 1; j <= M; j++) cin>>A[i][j];
	for (int i = 1; i <= N;i++) for (int j = 1; j <= M; j++) {
	if ((A[i][j]=='.') && (A[i-1][j]!='*') && (A[i+1][j]!='*') && (A[i][j-1]!='*') && (A[i][j+1]!='*')) count++;
	
	}
	cout<<count;
	return 0;
}