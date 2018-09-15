#include <iostream>

using namespace std;

int main() {
	long long N; long long max1=0,min1=0; long long count1 = 0;
	cin>>N;
	max1 = N * 6;
	if (N>6) count1 = N / 6;
	min1 = min1 + count1;
	N = N - count1*6;
	if (N==0) {cout<<min1<<" "<<max1; return 0; }
	while (1) {
	if (N>6) { N = N - 6; min1 = min1 + 1; }
	if (N==1) {min1 = min1 + 6; break;}
	if (N==2) {min1 = min1 + 5; break;}
	if (N==3) {min1 = min1 + 4; break;}
	if (N==6) {min1 = min1 + 1; break;}
	if (N==5) {min1 = min1 + 2; break;}
	if (N==4) {min1 = min1 + 3; break;}
	}
	cout<<min1<<" "<<max1;	
	return 0;
	
}