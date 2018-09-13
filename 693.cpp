#include <bits/stdc++.h>
#include <ctype.h>

using namespace std;

int main() {
	string s1, s2;
	cin>>s1;
	cin>>s2;
	int i = 0; char c;
	while (s1[i]) {
    	c=s1[i];
    	s1[i] = tolower(c);
    	i++;
  	}
	i = 0;
	while (s2[i]) {
    	c=s2[i];
    	s2[i] = tolower(c);
    	i++;
  	}
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	if (s1.length()!=s2.length()) { cout<<"No"; return 0; }
	for (int i = 0; i < s1.length(); i++) if (s1[i]!=s2[i]) {cout<<"No"; return 0;}
	cout<<"Yes";
    	return 0;	

}