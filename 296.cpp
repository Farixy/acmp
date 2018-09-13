#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"
#include "fstream"

using namespace std;

int main() {
	int N; int x = 0; int count5 = 0; int count3 = 0; int t = 0;
	cin>>N;
	while(1){
	x = (N/5)-(3*t/5);
	if ((N-3*t)%5==0) { count5 = t; break; }
	t++;
	}
	cout<<x<<" "<<count5;
	//system("PAUSE");
	return 0;	
}