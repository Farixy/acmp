#include <bits/stdc++.h>

using namespace std;

int fibo(int n) {
	if (n==1) return 1;
	if (n==2) return 1;
	return fibo(n-2)+fibo(n-1);
}

int main() {
	int fibo1[100];
	string str;
	cin>>str;
	for (int i = 1; i < 25; i++) fibo1[i]=fibo(i);
	//for (int i = 1; i < 25; i++) cout<<fibo1[i]<<" ";
	//cout<<endl;
	for (int i = 1; i < str.length()+1; i++) { 
	for (int j = 2; j < 25; j++)
	if (i==fibo1[j]) cout<<str[i-1];
	}
	return 0;
}