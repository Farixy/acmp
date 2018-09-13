#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	int n; int count0 = 0; int count1 = 0; int count2 =0; int check = 0;
	cin>>n;
	for (int i = 0; i < n; i++) {
	cin>>str;
	count0 = 0; count1 = 0; count2 = 0;  check = 0;
	for (int j = 0; j < str.length(); j++) {
	if (str[j]=='0') count0++;
	if (str[j]=='1') count1++;
	if (str[j]=='2') count2++;
	}
	for (int qq1 = 0; qq1 < count0; qq1++) if (str[qq1]=='0') {} else { check = 1; }
	for (int qq2 = count0; qq2 < count1; qq2++) if (str[qq2]=='1') {} else { check = 1; }
	for (int qq3 = count1; qq3 < count2; qq3++) if (str[qq3]=='2') {} else { check = 1; }
	if (((count0==count1) && (count1==count2)) && (check == 0)) cout<<"YES"<<endl; else cout<<"NO"<<endl;
	}

	return 0;
}