#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; int result = 9*60; int Nomer = 1;
  	cin>>N;
  
	for (int i = 1; i < N; i++) {
	result = result + 45;
	if (((i % 2)==0) && (N!=i)) result = result + 15; else result = result + 5;	
	}
	result = result + 45;
  cout<<result / 60<<" "<<result % 60;
  
     
    return 0;
}