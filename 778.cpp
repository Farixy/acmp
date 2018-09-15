#include <iostream>
using namespace std;
int main() {
	int a[31]; int sum = 0;
	for (int i = 0; i < 31; i++) {cin>>a[i];sum=sum+a[i];}
	cout<<sum/27;
	return 0;
	
}