#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "math.h"

using namespace std;


int main() {
	long long a,b;long long temp;long long temp1;
	cin>>a>>b;
	temp = a % 10;
	if (temp==1) cout<<1;
	if (temp==2) { 
	temp1 = b % 4; 
	if (temp1==1) cout<<"2";
	if (temp1==2) cout<<"4";
	if (temp1==3) cout<<"8";
	if (temp1==0) cout<<"6";
	} 
	if (temp==3) {
	temp1 = b % 4; 
	if (temp1==1) cout<<"3";
	if (temp1==2) cout<<"9";
	if (temp1==3) cout<<"7";
	if (temp1==0) cout<<"1";
	}
	if (temp==4) if (b%2==0) cout<<6; else cout<<4;
	if (temp==5) cout<<5;
	if (temp==6) cout<<6;
	if (temp==7) {
	temp1 = b % 4; 
	if (temp1==1) cout<<"7";
	if (temp1==2) cout<<"9";
	if (temp1==3) cout<<"3";
	if (temp1==0) cout<<"1";
	}
	if (temp==8) {
	temp1 = b % 4; 
	if (temp1==1) cout<<"4";
	if (temp1==2) cout<<"8";
	if (temp1==3) cout<<"2";
	if (temp1==0) cout<<"6";
	}
	if (temp==9) if (b%2==0) cout<<1; else cout<<9;
	if (temp==0) cout<<0;	
	return 0;	
}