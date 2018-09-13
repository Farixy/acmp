#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"

using namespace std;

int main() {
	int n; 
	cin>>n;
	long long a[n]; int temp;
	for (int i = 0; i < n; i++) cin>>a[i];
	for (int i = 0; i < n; i++) {
	if (a[i]==1) temp = i;
	}
	for (int i = temp; i < n; i++) cout<<a[i]<<" ";
	for (int i = 0; i < temp;i++) cout<<a[i]<<" ";
	return 0;	
}