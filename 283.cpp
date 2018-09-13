#include <bits/stdc++.h>

using namespace std;

int main() {
        string str; int A[100000];
	int answer; int count1 = 0; int count2 = 0;
	cin>>str;
	if (str.length()==1) { cout<<"No"; return 0; }
	for (int i = 0; i < 100000; i++) A[i] = 0;
	for (int i = 0; i < str.length(); i++) {
	answer = islower(str[i]);
	if (answer == 0) {
	A[i]=2;
	//cout<<str[i]<<" isupper"<<endl;
	} else {
	A[i]=1;
	}
	}
	for (int i = 0; i < 100000; i++) {
	if (A[str.length()-1]==2) { cout<<"No"; return 0; }
	if (A[0]==1) { cout<<"No"; return 0; }
	if ((A[0]==1) && (A[1]==2)) { cout<<"No"; return 0; }
	if ((A[i]==2) && (A[i+1]==2)) { cout<<"No"; return 0; }
	if (A[i]==1) count1++;
	//cout<<count1<<" "; 
	if (count1>3) { cout<<"No"; return 0; }
	//if (A[i]==2) && (A[i]==1
	if (A[i]==2) { 
	count1 = 0; count2++;
	} 
	}
	if (count2==0) cout<<"No"; else cout<<"Yes";
	//if ((count2*4)<count1) cout<<"No"; else cout<<"Yes";
	//for (int i = 0; i < 15; i++) cout<<A[i]<<" ";
	return 0;
}