#include <bits/stdc++.h>

using namespace std;

int main(){
	long long A[100000];
	int n;
	cin>>n;
	A[0]=1;
	A[1]=1;
	for (int i = 2; i < n; i++) {
	A[i]=A[i-2]+A[i-1];
	}
	for (int i = 0; i < n; i++) cout<<A[i] % 10<<" ";	




	return 0;
}