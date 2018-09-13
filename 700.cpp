#include <bits/stdc++.h>

using namespace std;

int main() {
	int N,V,K; int temp = 0; int buf = 0;
	cin>>N>>V>>K;
	temp = V;
	N = N - 1;
	buf = N;
	while(1) {
	if (N==0) break;
	temp = temp + buf;
	buf = buf - K;
	//cout<<temp<<endl; 
	N = N - 1;
	}
	cout<<temp;
	return 0;
}