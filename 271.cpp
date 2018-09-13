#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int fib_n(int n)
{
	//F(n)
	int x = 1;
	//F(n-1)
	int y = 0;
	for (int i = 1; i < n; i++)
	{
		x += y;
		y = x - y;
	}
	return x;
}

int main() {
	long long N;
	int flag = 0;
	cin>>N;
	
	
	for (int i = 1; i < 1000000;i++) {
	if (N==fib_n(i)) {
	cout<<"1"<<endl<<i;
	flag = 1;
	break;
	}	
	}
	if (flag == 0) cout<<"0";
	
	return 0;
}