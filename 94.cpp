#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
        int N,M,K;
	int temp;
	cin>>N>>M>>K;
	if (N>=M) { cout<<"1"; return 0; } else
	if (N<=K) { cout<<"NO"; return 0; } else { temp = (M-N-1)/(N-K)+2; cout<<temp; }	
	return 0;	
}