#include "iostream"
#include "stdlib.h"

using namespace std;

int main(){
	
	int a[235];
	int K = 0;
	int kassa1 = 480; int kassa2 = 485;
	int buf = 0;
	cin>>K;
	if (K>143) { cout<<"NO"; return 0; }
	/*
	for (int i = 1 ; i < 235; i++){
	if ((i%2)==0) {
	a[i] = kassa2;
	kassa2 = kassa2 + 10;
	} else {
	a[i] = kassa1;
	kassa1 = kassa1 + 10;
	}
	}
	buf = a[K] - 480;
	cout<<buf/60;
	cout<<" ";
	cout<<buf%60;
	*/
	buf = (K-1)*5;
	cout<<buf/60;
	cout<<" ";
	cout<<buf%60;	
	return 0;
}