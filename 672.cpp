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

long long sum(long long n) {
    long long result = 0;
    while(1) {
    if (n==0) break;
    result = (n % 10) + result;
    n = n / 10;
    }
    return result;
}




int main() {
	int N; int min = 9999999; int count = 0;
	cin>>N;
	if (N==1) { cout<<"10 0"; return 0;}
	if (N==2) {
	for (int i = 10; i < 100; i++) if (mul(i)==sum(i)) {
	count++;
	if (min>i) min = i;
	}
	cout<<count<<" "<<min;
	}
	if (N==3) {
	for (int i = 100; i < 1000; i++) if (mul(i)==sum(i)) {
	count++;
	if (min>i) min = i;
	}
	cout<<count<<" "<<min;
	}
	if (N==4) {
	for (int i = 1000; i < 10000; i++) if (mul(i)==sum(i)) {
	count++;
	if (min>i) min = i;
	}
	cout<<count<<" "<<min;
	}
	if (N==5) {
	for (int i = 10000; i < 100000; i++) if (mul(i)==sum(i)) {
	count++;
	if (min>i) min = i;
	}
	cout<<count<<" "<<min;
	}
	if (N==6) {
	for (int i = 100000; i < 1000000; i++) if (mul(i)==sum(i)) {
	count++;
	if (min>i) min = i;
	}
	cout<<count<<" "<<min;
	}
	if (N==7) {
	for (int i = 1000000; i < 10000000; i++) if (mul(i)==sum(i)) {
	count++;
	if (min>i) min = i;
	}
	cout<<count<<" "<<min;
	}
	if (N==8) {
	for (int i = 10000000; i < 100000000; i++) if (mul(i)==sum(i)) {
	count++;
	if (min>i) min = i;
	}
	cout<<count<<" "<<min;
	}
	if (N==9) {
	for (int i = 100000000; i < 1000000000; i++) if (mul(i)==sum(i)) {
	count++;
	if (min>i) min = i;
	}
	cout<<count<<" "<<min;
	}
	if (N==10) {
	for (int i = 1000000000; i < 10000000000; i++) if (mul(i)==sum(i)) {
	count++;
	if (min>i) min = i;
	}
	cout<<count<<" "<<min;
	}
 	
	


	return 0;
}