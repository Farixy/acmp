#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int C[101];
	int N; int max = -9999999;
	cin>>N;
	for (int i = 1; i <= N; i++) cin>>C[i];
	for (int i = 1; i <= N; i++) C[i]=C[i]*i;
	for (int i = 1; i <= N; i++) if (C[i]>max) max = C[i];
	cout<<max;	
}