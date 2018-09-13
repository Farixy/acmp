#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
	string s;    int x = 0;
	int N;
	cin>>N;
	for (int i = 0; i < N; i++) {
	x = 0;
	cin>>s;
	while((s.length() % 3)>0) s = '0'+s;
	while(1){
	x = x + s[0]*4 + s[1]*2 + s[2];
	s.erase(0,3);
	if (s.size()==0) break;
	}
	if (( x % 7)==0) cout<<"Yes"<<endl; else cout<<"No"<<endl;
	}
	
	
	


	return 0;	
}