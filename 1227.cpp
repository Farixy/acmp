#include <bits/stdc++.h>

using namespace std;

long long factorial(long long temp) {
	long long result = 1;
	for (int i = 1; i <= temp; i++) {
	result = result * i;
	}
	return result;	
}

int main() {
	long long n,k; long long answer;
	cin>>n>>k;
	answer = ((factorial(n))/(factorial(k)*factorial(n-k)));
	cout<<answer;
	return 0;
}