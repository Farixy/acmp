#include <iostream>
using namespace std;
int main() {
	string str;
	int count1 = 0, i = 0, length = 0,flag = 0;
	cin>>str;
	length = str.length();
	while(1) {
	if ((str[i]=='1') && (flag==0)) { cout<<'a'; count1 = 0; }
	if ((str[i]=='1') && (flag==1)) { cout<<char(int('a')+count1); count1 = 0; }
	if (str[i]=='0') {count1++; flag = 1;}
	if (length==i) break;
	//cout<<str[i];
	i = i + 1;
	}
	return 0;	
}