#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int n; int temp = 0;
	cin>>n;
	for (int i = 0; i < n-1; i++) {
	temp = temp + i;
	}
	cout<<2*n+temp;

	return 0;
}