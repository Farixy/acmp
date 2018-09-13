#include <bits/stdc++.h>

using namespace std;

int main() {
	int k,m,n; int result = 0;
	cin>>k>>m>>n;
	while (1) {
	if (n<=0) break;
	n = n - k;
	result = result + m;
	}
	cout<<result*2;	



	return 0;
}