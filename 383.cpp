#include <bits/stdc++.h>


bool check (int n) {
    int sum = 0; int count = 0;
    while(1) {
    if (n==0) break;
    sum = sum + (n % 10);
    n = n / 10;
    count++;
    }
    if ((sum % count)==0) return true; else return false;		
}


using namespace std;

int main(){
	
	vector<int> A(1000000);
	int N; 
	cin>>N;
	//cout<<check(N);
	int j = 0;
	for (int i = 1; i < 1000000; i++) {
	if (check(i)==1) { A[j] = i; j++;}
	}
	cout<<A[N-1];
	 
	return 0;
}