#include <bits/stdc++.h>

using namespace std;


int main() {                        
	int n; int temp; string str; int count = 0;
	cin>>str; int sum = 0;
	
	for (int i = 0; i<str.length();i++) {
	//sum = sum + static_cast<int>(str[i]-48);
	if ((str[i]=='0') && (str[str.length()-1]=='0')) { count++; }
	if (str[str.length()-1]!='0') { cout<<"1"; return 0;}
	}
	cout<<"1";
	for (int i = 0; i < count; i++) cout<<"0"; 
	return 0;
}