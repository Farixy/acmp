#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
	int n; int sum1=0; int sum2=0; int count1=0,count2=0,count3=0;
	int A[10005];
	cin>>n;
	for (int i = 0; i < n; i++) cin>>A[i];
	for (int i = 0; i < n; i++) {
	    if (A[i]>=0) { sum1 = sum1 + abs(A[i]); count1++; }
	    if (A[i]<=0) { sum2 = sum2 + abs(A[i]); count2++; }
	    if (A[i]==0) { count3++;}
	}
	if (count3==n) { cout<<"0"; return 0; }
	if (sum1>sum2) cout<<count1<<endl; else cout<<count2<<endl;
	for (int i = 0; i < n; i++) {
	    if (sum1>sum2) { if (A[i]>=0) cout<<i+1<<" "; } else if (A[i]<=0) cout<<i+1<<" ";   
	}

	
	return 0;
}