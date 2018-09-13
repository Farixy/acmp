#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	long long a,b,c,d;
	long long temp;
	cin>>a>>b>>c>>d;
	for (int x = -100; x <= 100; x++) {
	temp =((a*x*x*x)+(b*x*x)+(c*x)+d); 
	if (temp==0) cout<<x<<" ";
	}
	
	return 0;
}