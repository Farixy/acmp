#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"

using namespace std;


int main() {
	int input[101];
	int N; int result1=0; int result2=1; int min1=9999999; int max1=-999999; int index_min,index_max;
	cin>>N;
	for (int i = 0; i < N;i++) cin>>input[i];
	for (int i = 0; i < N;i++) if (input[i]>0) result1=result1+input[i];
	for (int i = 0; i < N;i++) if (min1>input[i]) { min1=input[i]; index_min=i;}
	for (int i = 0; i < N;i++) if (max1<input[i]) { max1=input[i]; index_max=i;}
	for (int i = min(index_min,index_max)+1; i < max(index_max,index_min);i++) result2 = result2*input[i];
	cout<<result1<<endl;
	cout<<result2;	
	return 0;	
}