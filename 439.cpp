#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {
	int n,p;
	float res;
	cin>>n>>p;
	res = 1.0*((1-(p/100))/n)+1.0*(p/100);
	res = 1/res;
	printf("%.10f", res);
	return 0;
}