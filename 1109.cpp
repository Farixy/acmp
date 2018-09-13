#include <bits/stdc++.h>
using namespace std;
int main(){
  	int N;
  	cin>>N;
  if (N>0) {
  cout<<"The next number for the number "<<N<<" is "<<N+1<<"."<<endl;
  cout<<"The previous number for the number "<<N<<" is "<<N-1<<".";
  }
  if (N<0) {
  cout<<"The next number for the number "<<N<<" is "<<N+1<<"."<<endl;
  cout<<"The previous number for the number "<<N<<" is "<<N-1<<".";
  }
  if (N==0) {
  cout<<"The next number for the number "<<N<<" is "<<N+1<<"."<<endl;
  cout<<"The previous number for the number "<<N<<" is "<<N-1<<".";
  }
  
return 0;
}