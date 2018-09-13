#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"

using namespace std;

int main() {
	
	int  N,M,K;  int temp1,temp2;
	cin>>N>>M>>K;
	
	if (K<=2) { cout<<"0"; return 0; }
		
	temp1 = N / (K-2); // deti
	if ((N%(K-2))!=0) temp1++;
	if ((M/2)<temp1) { cout<<"0"; return 0; }
	
	temp2 = (M+N)/K;
	if ((M+N)%K!=0) temp2++;

	cout<<temp1<<endl;
	cout<<temp2<<endl;

	return 0;	
}