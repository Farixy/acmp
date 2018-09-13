#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
	float y = 0, a = 2.5;
	for (int x = -4; x <= 2; x++) {
	y = (log(abs(x))-exp(x))/(sin(x)-pow(a,x));
	cout<<x<<" "<<y<<endl;
	} 
	return 0;
}