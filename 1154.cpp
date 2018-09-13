#include <bits/stdc++.h>

using namespace std;

int main() {
	string s, temp1,temp2,temp3,temp4; int step = 1; int j = 0; int tmp1 = 0,tmp2 = 0,tmp3 = 0,tmp4 = 0;
	cin>>s;
	temp1.clear();temp2.clear();temp3.clear();temp4.clear();                                             
	for (int i = 0; i < s.length(); i++) {
	if (s[i]=='.') { j = 0; step++; i++; }
	if (step==1) { temp1[j] = s[i]; j++;}
	if (step==2) { temp2[j] = s[i]; j++;}
	if (step==3) { temp3[j] = s[i]; j++;}
	if (step==4) { temp4[j] = s[i]; j++;}
	}
	tmp1 = atoi(temp1.c_str()); tmp2 = atoi(temp2.c_str()); tmp3 = atoi(temp3.c_str()); tmp4 = atoi(temp4.c_str());	
	if ((tmp1<=255) && (tmp2<=255) && (tmp3<=255) && (tmp4<=255) && (tmp1>=0) && (tmp2>=0) && (tmp3>=0) && (tmp4>=0)) cout<<"Good"; else cout<<"Bad"; 	
	return 0;
}