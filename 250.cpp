#include <bits/stdc++.h>

using namespace std;

bool check(char N[]){
	//sort(N,N+strlen(N));
	int number[11]; int sum = 0;
	for (int i = 0; i <= 9; i++) number[i] = 0;
	//cout<<N<<endl;
	for (int i = 0; i <= strlen(N);i++) {
	number[static_cast<int>(N[i])-48] = 1;
	}
	//for (int i = 0; i <= 9; i++) cout<<number[i]<<" ";
	for (int i = 0; i <= 9; i++) sum = sum + number[i];
	if (sum>2) return false; else return true; 
	//cout<<count1<<endl;	
}

int main(){
	char N[7]; int temp; int temp1; int temp2;
	cin>>N;
	temp = atoi(N);
	//cout<<check(N);
	
	for (int i = temp; i > 0; i--) {
	char str[7];
	sprintf(str, "%d", i);
	if (check(str)==1) { temp1 = i; break;}
	
	}
	for (int i = temp; i < temp*2; i++) {
	char str[7];
	sprintf(str, "%d", i);
	if (check(str)==1) { temp2 = i; break;}
	
	}
	if (temp2-temp==temp-temp1) {cout<<temp1; return 0;}
	if (temp2-temp>temp-temp1) cout<<temp1; else cout<<temp2;
	 
	
	
	//cout<<count1;
	return 0;
}