#include <iostream>
using namespace std;
int main() {
  	int n,m; int max1,min1;
  	cin>>n>>m;
  	if (m==0) { cout<<n<<" "<<n; return 0;}
    if (n==0) { cout<<"Impossible"; return 0;}
  	if (n>m) min1 = n; else min1 = m;
  	max1 = n+m-1;
  	cout<<min1<<" "<<max1;
	return 0;
}