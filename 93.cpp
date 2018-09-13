#include <bits/stdc++.h>

using namespace std;

bool compare(string temp1, string temp2) {
	if (temp1.length()!=temp2.length()) return 0;
	int count = 0;
	for (int i = 0; i < temp1.length(); i++) {
	if (temp1[i]!=temp2[i]) count++;
	}
	if ((count==1) || (count==0)) return 1; else return 0;
}

int main() {
	int N,M; int buf = 0;
	vector<string> Gods;
	string buffer = "";
	vector<string> Suspects;
	cin>>N;
	for (int i = 0; i < N; i++) {
	cin>>buffer;
	Gods.push_back(buffer);
	}
	cin>>M;
	for (int i = 0; i < M; i++) {
	cin>>buffer;
	Suspects.push_back(buffer);
	}
		
	for (int i = 0; i < N; i++) {
	for (int j = 0; j < M; j++) {
	if ((compare(Gods[i],Suspects[j])==1) && (Gods[i]!=Suspects[j])) buf++;
	}
	cout<<buf<<" ";
	buf = 0;
	}
	
	/*
	for (int i = 0; i < N; i++) {
	cout<<Gods[i]<<" ";
	}
	cout<<endl;
	for (int i = 0; i < M; i++) {
	cout<<Suspects[i]<<" ";
	}
	*/
	return 0;
}