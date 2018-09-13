#include <bits/stdc++.h>

using namespace std;

string SS(int n, int radix) {
  	string buffer;
  	do {
    	int x = n % radix;
    	n = n / radix;
    	char z;
    	if( x<10 ) z ='0'+x;  	else  	z='A'-10+x;
    	buffer+= z;
  	} while (n>0);
	return buffer;
}

int bintoN(string str, int j){
    int numb = 0;
    for (int i = str.length()-1; i >= 0; i--) numb+=(str[i]-48)*pow(j,i);
    return numb;
}

int main() {
	string A, temp2;
	long long B, temp1;
	cin>>A;
	cin>>B;
	
	for (int i = 2; i <= 36; i++) {
	temp2 = 
	reverse(temp2.begin(),temp2.end());
	temp1 = bintoN(SS(B,i),i);
	if (temp1==B) {cout<<i; return 0;}
	}
	
	return 0;
}