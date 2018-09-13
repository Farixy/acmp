#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"

using namespace std;

int main() {
	
	int K,W; int a1,a2,a3,b1,b2,b3; bool flag = false;
	cin>>K>>W;
	cin>>a1>>b1>>a2>>b2>>a3>>b3;
	
	if ((a1+a2<=W) && (b1+b2>=K)) flag = true;
	if ((a1+a3<=W) && (b1+b3>=K)) flag = true;
	if ((a1+a2+a3<=W) && (b1+b2+b3>=K)) flag = true;

	
        if ((a2+a3<=W) && (b2+b3>=K)) flag = true;
        
	if ((a1<=W) && (b1>=K)) flag = true;
        if ((a2<=W) && (b2>=K)) flag = true;
	if ((a3<=W) && (b3>=K)) flag = true;
    	if (flag == true) cout<<"YES"; else cout<<"NO";

	return 0;	
}