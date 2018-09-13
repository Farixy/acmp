#include <bits/stdc++.h>

using namespace std;

int sum(int n) {
	int sum = 0;
	while(1) {
	if (n==0) break;
	sum = sum + (n % 10);
	n = n / 10;
	}
	return sum;		
}

int best_number(int a, int b){
	if (sum(a)==sum(b)) if (a<b) return a; else return b;
	if (sum(a)>sum(b)) return a; else return b;		
}

int main() {
	int n; int temp;
	cin>>n;
	temp = 1;
	for (int i = 2; i < 100000; i++) {
	if ((n%i)==0) { temp = best_number(i, temp); }
	}
	cout<<best_number(temp,n);
	return 0;
}