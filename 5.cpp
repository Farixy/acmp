#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"

using namespace std;


int main() {
	int input[101]; int chet[101]; int nechet[101];
	int N; int count1=0; int count2=0;
	cin>>N;
	for (int i = 0; i < N;i++) cin>>input[i];
	for (int i = 0; i < N;i++) if ((input[i] % 2) == 0 ) {} else {cout<<input[i]<<" "; count1++;}
	cout<<endl;
	for (int i = 0; i < N;i++) if ((input[i] % 2) == 0 ) {cout<<input[i]<<" "; count2++;} else {}
	cout<<endl;
	if (count1>count2) cout<<"NO"; else cout<<"YES";	
	return 0;	
}