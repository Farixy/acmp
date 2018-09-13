#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"
#include "time.h"
#include "math.h"

using namespace std;

bool prime(long long n){ 
	for(long long i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}

int main() {
	srand(time(NULL));
	int M,N; int count1=0;
	cin>>M;
	cin>>N;
	for (int i = M; i <= N; i++){
	if (prime(i)==1) {cout<<i<<endl; count1=1;}
	}
	if (count1==0) cout<<"Absent"; 
	return 0;	
}