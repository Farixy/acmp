#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"

using namespace std;

int f(int N) {
	if (N==0) return 0;
	if (N==1) return 1;
	if (N%2==0) return f(N/2);
	return f(N/2)+f(N/2+1);	
}

int main() {
	int N; 
	cin>>N;
	cout<<f(N); 
	return 0;	
}