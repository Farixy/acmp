#include <bits/stdc++.h>

using namespace std;
int main() {
	long long x1,x2,y1,y2;
	long long xa,ya;
	long long xb = 0, yb = 0;
	cin>>x1>>y1>>x2>>y2;
	cin>>xa>>ya;
	if (x1==x2) {
	xb = 2*x1-xa;
	yb = ya;
	}
	if (y1==y2) {
	xb = xa;
	yb = 2*y1-ya;	
	}
	cout<<xb<<" "<<yb;
	return 0;
}
