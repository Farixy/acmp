#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"

using namespace std;

int main() {
	int n; 
	cin>>n;
	long long a[n];
	long long b[n];
	a[1] = 2; a[2] = 3; a[3] = 4; a[4] = 7; a[5] = 13; a[6] = 15;
	b[1] = 1; b[2] = 5; b[3] = 6; b[4] = 8; b[5] = 9; b[6] = 10; b[7] = 11; b[8] = 12; b[9]=14; b[10] = 16;
	for (int i = 1; i<=n; i++) {
	if (a[i]!=i) b[i]=i;
	if (i>5) a[i] = b[n-1]+b[n-3];	
	}
	cout<<a[n]<<endl;
	cout<<b[n]<<endl; 
	return 0;	
}