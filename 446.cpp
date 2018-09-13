#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	char A[100][100];
	int B[100][100];
	int n,m;
	cin>>n>>m;
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin>>A[i][j];
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin>>B[i][j];
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) {
	if (B[i][j]==0) if ((A[i][j]!='.')) {cout<<"NO"; return 0;}
	if (B[i][j]==1) if ((A[i][j]!='B') && (A[i][j]!='.')) {cout<<"NO"; return 0;}
	if (B[i][j]==2) if ((A[i][j]!='G') && (A[i][j]!='.')) {cout<<"NO"; return 0;}
	if (B[i][j]==3) if ((A[i][j]!='G') && (A[i][j]!='B') && (A[i][j]!='.')) {cout<<"NO"; return 0;}
 	if (B[i][j]==4) if ((A[i][j]!='R') && (A[i][j]!='.')) {cout<<"NO"; return 0;}
	if (B[i][j]==5) if ((A[i][j]!='R') && (A[i][j]!='B') && (A[i][j]!='.')) {cout<<"NO"; return 0;}
        if (B[i][j]==6) if ((A[i][j]!='R') && (A[i][j]!='G') && (A[i][j]!='.')) {cout<<"NO"; return 0;}
	if (B[i][j]==7) if ((A[i][j]!='R') && (A[i][j]!='B') && (A[i][j]!='G') && (A[i][j]!='.')) {cout<<"NO"; return 0;}
	}
	cout<<"YES";
	return 0;	
}