#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
	int w,h;
	char A[100][100]; char B[100][100]; char C[100][100]; char Law[10];
	cin>>w>>h;
	for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) cin>>A[i][j];
	for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) cin>>B[i][j];
	for (int i = 0; i < 4; i++) cin>>Law[i];
	
	
	for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) {
	if (((A[i][j]=='0') && (B[i][j]=='0'))) C[i][j]=Law[0];
	if (((A[i][j]=='0') && (B[i][j]=='1'))) C[i][j]=Law[1];
	if (((A[i][j]=='1') && (B[i][j]=='0'))) C[i][j]=Law[2];
	if (((A[i][j]=='1') && (B[i][j]=='1'))) C[i][j]=Law[3];
	}		
        for (int i = 0; i < h; i++) {
	for (int j = 0; j < w; j++) { cout<<C[i][j]; }
	cout<<endl;
	}
	return 0;
}