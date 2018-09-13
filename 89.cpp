#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; char str[50]; int temp1 = 0; int temp2 = 0; int temp_result; int result = 12*60;
	char otpr[10]; char prib[10]; string temp_name_train; float x; int res1 = 0;
	cin>>n;
	int min = 100000; 
	char q; 
	string res;
	for (int i = 0; i < n; i++) {
	int A[25]; int count_hour = 0;
	string s; s="";
	scanf(" %c",&q); 
	do { 
	s+=q; 
	scanf("%c",&q); 
	} while (q!='"'); 
	s+=q;
	cin>>otpr;
	cin>>prib;
	temp1 = 0; temp2 = 0;
	temp1 = ((static_cast<int>(otpr[0]-48))*10+(static_cast<int>(otpr[1]-48)))*60+(static_cast<int>(otpr[3]-48))*10+(static_cast<int>(otpr[4]-48));
	temp2 = ((static_cast<int>(prib[0]-48))*10+(static_cast<int>(prib[1]-48)))*60+(static_cast<int>(prib[3]-48))*10+(static_cast<int>(prib[4]-48));
	temp1 = temp1 + 1440;
	temp2 = temp2 + 1440;
	if (temp1==temp2) continue;
	if (temp1>temp2) temp_result = temp1 - temp2; else temp_result = temp2 - temp1;
	if (temp_result!=0) if (temp_result<min) { 
	min = temp_result; res = s;
	} 
	//if (temp1==temp2) { temp_result = 0; continue; }
	//if (temp1>temp2) temp_result = (temp1 + temp2) % 12; else temp_result = (temp2 - temp1) % 12;
	//cout<<temp_result<<endl;
	//if (result>temp_result) { temp_name_train = s; result = temp_result; cout<<result; }
	}
	cout<<"The fastest train is "<<res<<".";
	cout<<endl;
	x = (int)( ( 650.0 / ( min / 60.0 ) ) + 0.5 ) ;
	cout<<"It's speed is "<< x <<" km/h, approximately.";
	
	//cout<<650/(temp_result/60);
	
	//cin>>otpr;
	//cout<<static_cast<int>(otpr[0]-48)*10<<" "<<otpr[1]<<otpr[2]<<otpr[3]<<otpr[4];
	
	return 0;	
}