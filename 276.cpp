#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	/*
	int n,m;   int temp = 0; int count1 = 0; int number = 0;
	cin>>n>>m;
	for (int i = 1; i < 10000; i++) {
	temp = m*i;
	count1++;
	if (temp>n) break;
	number = i;
		
	}
	for (int i = 1; i < count1; i++) cout<<number<<" ";
	if (n%m!=0) cout<<number+1;
	*/
	/*
	if ((n%m)==0) {
	temp = n / m;
	for (int i = 0;i<m;i++) cout<<temp<<" ";
	} 
	if ((n-1)%m==0) {
	temp = (n-1)/m;
	for (int i = 1;i<m;i++) cout<<temp<<" ";
	cout<<temp+1;
	}
	if ((n+1)%m==0){
	temp = (n+1)/m;
	for (int i = 1;i<m;i++) cout<<temp<<" ";
	cout<<temp-1;
	}
	*/
	int N,M;
	cin>>N>>M;
	if (((N % M) == 0) && (M*M==N)) for (int i = 1; i <= M;i++) cout<<M<<" "; 	
	return 0;
}