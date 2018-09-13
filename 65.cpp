#include <bits/stdc++.h>

using namespace std;

int main() {
	string input;
	string temp;
	int n;
	vector<string>str;
	vector<int>number;
	cin>>input;
	cin>>n;
	if (n==0) { cout<<"0"; return 0;} 
	for (int i = 0; i < n; i++) {
	cin>>temp;
	str.push_back(temp);
	}
	for (int q = 0; q < n; q++) {
	string temp = str[q];
	int count = 0;
	for (int i = 0; i < temp.length(); i++) {
		if (temp[i]!=input[i]) count++;
		}
	number.push_back(count);
	}
	int min = number[0];
	for (int i = 0; i < number.size(); i++) {
	if (number[i]<=min) min = number[i]; 
	}
	int count1 = 0;
	for (int i = 0; i < number.size(); i++) {
	if (number[i]==min) count1++; 
	}
	cout<<count1<<endl;
	for (int i = 0; i < number.size(); i++) {
	if (number[i]==min) cout<<i+1<<" "; 
	}

	return 0;
}