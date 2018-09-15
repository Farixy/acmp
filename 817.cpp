#include <iostream>

using namespace std;

int main() {
	long long n,m,d,k; long long count_per = 0; long long S_per = 0, S_street = 0, Sum = 0, total = 0; 
	cin>>n>>m>>d>>k;
	count_per = n * m;
	S_street = d * k;
	S_per = d * d;
	Sum = S_per*count_per;
	total = (S_street*n)+(S_street*m) - Sum;
	cout<<total;	
	return 0;
}