#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"

using namespace std;


int main() {
	int a,b, temp, result;
	cin>>a>>b;
	temp = __gcd(a,b);
	result = (a*b)/temp;
	cout<<result;
	return 0;	
}