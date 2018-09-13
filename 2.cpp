#include "iostream"
#include "stdlib.h"
#include "algorithm"

using namespace std;

int main() {
        long long sum=0;
	int n;
	cin>>n;
	if (n==0) { cout<<"1"; return 0; }
	if (n>0) for (int i=1;i<=n;i++) sum=sum+i;
	if (n<0) for (int i=1;i>=n;i--) sum=sum+i;
	cout<<sum;


	return 0;	
}