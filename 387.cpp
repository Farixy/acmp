#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int n; int count = 0;
	cin>>n;
	char A[100];
	for (int i = 0; i < n; i++) {
        cin>>A;
	if (A[0]==A[3]) count++;
	}
	cout<<count;



	return 0;
}