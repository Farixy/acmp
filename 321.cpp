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

bool same_digits(string str) {
	for (int i = 0; i < str.length(); i++)	
	for (int j = 0; j < str.length(); j++) {
	if ((str[i]==str[j]) && (i!=j)) return false;
	}
	return true;		
}

int main() {
	int n;
	cin>>n;
	//cout<<same_digits(SS(1,15));
	for (int i = 2; i <= 36; i++) {
	//cout<<same_digits(SS(n,i));
	if (same_digits(SS(n,i))==1) cout<<i<<" ";
	}
	return 0;
}