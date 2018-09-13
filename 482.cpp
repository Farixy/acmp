#include <bits/stdc++.h>

using namespace std;

int main() {
	srand(time(NULL));	
	vector<string> str; int j = 0;
	string str1;
	str.push_back("1");
	for (int i = 2; i < 1000; i++) {
		char string1[10] = "";
		string temp;
		itoa(i,string1,10);
		temp+= str[i-2];
		temp+= string1;
		str.push_back(temp);
	}
	for (int i = 0; i < str.size(); i++) {
	str1+=str[i];
	}
	//for (int i = 0; i < str.size(); i++) cout<<str[i]<<" ";
	int N;
	cin>>N;
	cout<<str1[N-1];
	/*
	int n; string str2 = "";
	cin>>n;
	for (int i = 0; i < n; i++){
	int temp;
	cin>>temp;
	str2+=str1[temp-1];
	}
	cout<<str2;
	*/
	return 0;
}