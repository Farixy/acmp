#include <iostream>
using namespace std;
int main(){
	long long m,n,i,j,c;
	cin>>m>>n>>i>>j>>c;
	if ((m%2==0) && (n%2==0)) {cout<<"equal"; return 0;}
	if (((m%2!=0) && (n%2==0)) || ((m%2==0) && (n%2!=0))) {cout<<"equal"; return 0;}
	if ((((i%2)!=0) && ((j%2)!=0)) || (((i%2)==0) && ((j%2)==0))) { if (c==0) cout<<"black"; else cout<<"white"; return 0;} else 
	{if (c==0) cout<<"white"; else cout<<"black"; return 0;} 		
	return 0;	
}