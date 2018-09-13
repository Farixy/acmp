#include <bits/stdc++.h>

using namespace std;

int main(){
	string T; int count = 0;
	string S;
	cin>>T;
	cin>>S;
	for (int i = 0; i < T.length();i++)
	for (int j = 0; j < S.length();j++) {
	if (T[i]==S[j]) count++;
	if (count==S.length()) cout<<"Nashel"<<i<<endl;
	}

	return 0;
}