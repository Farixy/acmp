#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {
	long long x1,x2,x3,y1,y2,y3;  double S = 0;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	S = abs((x1-x3)*(y2-y3)-(y1-y3)*(x2-x3));
	printf("%.1f",S/2); 
	return 0;
}