#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <algorithm>

using namespace std;

void readlong(int *a) {
	char s[101];
	cin>>s;
	a[0]=strlen(s);
	for (int i = 1; i <= a[0];i++){
	a[a[0]-i+1]=static_cast<int>((s[i-1])-48);
	}
}

void writelong(int *a) {
	for (int i = a[0]; i >= 1; i--) cout<<a[i];	
}

void printlong(int *a) {
	for (int i = 0; i <= a[0]; i++) cout<<a[i]<<endl;	
}

int main(){
	int maxsize = 102;
	int a[maxsize], b[maxsize];
	readlong(a);
	readlong(b);
	int m = max(a[0],b[0]);
	int c = 0;
	for (int i = 1; i<=m;i++) {
		c = c + a[i]+b[i];
		a[i] = c % 10;
		c = c / 10;
	}
	if (c>0) {
		m = m + 1;
		a[m] = c;
	}
	a[0] = m;
	writelong(a);
	return 0;
}