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

//1011
//1101

string sdvig(string &s1){
	char temp = s1[s1.length()-1];
	string s2 = s1;
	for (int i = 0; i < s1.length()-1; i++) {
    	s1[i+1] = s2[i];
	}
	s1[0] = temp;
	return s1;	
}

int bintodec(string str){
    int numb = 0;
    for (int i = str.length()-1; i >= 0; i--) numb+=(str[i]-48)*pow(2,i);
    return numb;
}

int main() {
	int n; 
	string s;int max1 = 0; int temp;
	cin>>n;
	s = SS(n,2);
	for (int j = 0; j < s.length(); j++) {
	temp = bintodec(sdvig(s));
	//cout<<sdvig(s)<<endl;
	if (temp > max1) max1 = temp;
	}
	cout<<max1;
	return 0;
}