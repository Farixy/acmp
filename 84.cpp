#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	char A[101][101];
	int N,M;  int maxI=0, maxJ=0; int index_i; int index_j;
	cin>>N>>M;
	for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) cin>>A[i][j];
	for (int i = 0; i < N; i++) {
	int temp1 = 0;  int temp2 = 0;
	for (int j = 0; j < M; j++) { 
	if (A[i][j]=='*') temp1++;  
	if (A[j][i]=='*') temp2++;
	}
	if (temp1>maxJ) maxJ=temp1;
	if (temp2>maxI) maxI=temp2;
	}
	
	for (int i = 0; i < N; i++) {
	for (int j = 0; j < M; j++) if ((A[i][j]=='.') && (A[i][j+1]=='*')) { 
	index_i = i; index_j = j; break; 
	}
	break;
	}
	cout<<index_i<<" "<<index_j<<endl;
	for (int i = index_i; i <= maxI; i++) for (int j = index_j; j <= maxJ; j++) A[i][j]='*';
	for (int i = 0; i < N; i++) {
	for (int j = 0; j < M; j++) cout<<A[i][j];	
	cout<<endl;
	}
	return 0;
}