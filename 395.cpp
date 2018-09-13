#include <bits/stdc++.h>

using namespace std;

long long mul(long long n) {
	long long result = 1;
	while(1) {
	if (n==0) break;
	result = (n % 10) * result;
	n = n / 10;
	}
	return result;
}

int main() {
	int L,R;  int count=0; long long temp;
	cin>>L;
	cin>>R;
	
	for (long long i = L;i <= R;i++){
	temp = mul(i);
	if (temp==0) continue; 
	if ((i%(temp))==0) count++;
	//cout<<mul(i)<<endl;
	}
	cout<<count;
	
	//cout<<mul(12);
	return 0;
}