#include <iostream>
#include <stdlib.h>

using namespace std;

int Check(int d[],int n) {
	for (int i = 0; i < n*n; i++) {
	if (d[i]!=1) { cout<<"Incorrect"; return 0;}
	}
	return 0;
}

void Update(int *d,int n) {
	for (int i = 0; i < n*n; i++) d[i]=0;
}

int main() {
	int A[101][101];
	int d[101];
	int n;  int x = 0;
	cin>>n;
		
	for (int i = 0; i < n*n; i++) for (int j = 0; j < n*n; j++) cin>>A[i][j];
	
        for (int i = 0; i < n*n; i++) {
	Update(d,n); 
	for (int j = 0; j < n*n; j++) {
	d[A[i][j]]=1;
	}
	for (int x = 1; x <= n*n; x++) if (!d[x]) { cout<<"Incorrect"; return 0;}
	}
	
	for (int j = 0; j < n*n; j++) {
	Update(d,n); 
	for (int i = 0; i < n*n; i++) {
	d[A[i][j]]=1;
	}
	for (int x = 1; x <= n*n; x++) if (!d[x]) { cout<<"Incorrect"; return 0;}
	}

	for (int i0 = 0; i0 < n*n; i0 +=n) {
	for (int j0 = 0; j0 < n*n; j0 +=n) {
	Update(d,n);
	for (int i = i0; i < i0+n; i++) {
	for (int j = j0; j < j0+n; j++) {
	d[A[i][j]]=1;
	}
	}
	for (int x = 1; x <= n*n; x++) if (!d[x]) { cout<<"Incorrect"; return 0;}
	}
	}
	cout<<"Correct";
	return 0;
}