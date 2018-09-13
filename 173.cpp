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

bool polindrom(string str) {
	int n = str.length();
	for (int i = 0; i < n/2; i++) {
	if (str[i]!=str[n-i-1]) return false;
	}
	return true;		

}

int main() {
	int n; int check = 0;
	cin>>n;
	for (int i = 2; i <= 36; i++) {
	if (polindrom(SS(n,i))==1) check+=1;
	}
	if (check==1) cout<<"unique"<<endl;
	if (check>1) cout<<"multiple"<<endl;
	for (int i = 2; i <= 36; i++) {
	if (polindrom(SS(n,i))==1) cout<<i<<" ";
	}
	if (check==0) cout<<"none";
	return 0;
}