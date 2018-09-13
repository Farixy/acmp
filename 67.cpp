#include <bits/stdc++.h>

using namespace std;

void asd(string temp2, string temp3, std::vector<std::string>& mask, int N) {
	char a1[5]=""; char a2[5]=""; char a3[5]=""; char a4[5]="";
	char b1[5]=""; char b2[5]=""; char b3[5]=""; char b4[5]=""; int countres = 0;  
	for (int i = 0, k = 1, j = 0; i < temp2.length(); i++){
	if (temp2[i]=='.') { k++; j = 0; i++; }
	switch(k) {
		case 1:{
		a1[j] = temp2[i]; j++;
		break;
		}
		case 2:{
		a2[j] = temp2[i]; j++;	
		break;
		}
		case 3:{
		a3[j] = temp2[i]; j++;
		break;
		}
		case 4:{
		a4[j] = temp2[i]; j++;
		break;
		}
	}		
	}
	for (int i = 0, k = 1, j = 0; i < temp3.length(); i++){
	if (temp3[i]=='.') { k++; j = 0; i++; }
	switch(k) {
		case 1:{
		b1[j] = temp3[i]; j++;
		break;
		}
		case 2:{
		b2[j] = temp3[i]; j++;	
		break;
		}
		case 3:{
		b3[j] = temp3[i]; j++;
		break;
		}
		case 4:{
		b4[j] = temp3[i]; j++;
		break;
		}
	}		
	}
	int a11 = atoi(a1); int a22 = atoi(a2);	int a33 = atoi(a3); int a44 = atoi(a4);
	int b11 = atoi(b1); int b22 = atoi(b2);	int b33 = atoi(b3); int b44 = atoi(b4);
	//cout<<a11<<a22<<a33<<a44<<endl;
	//cout<<b11<<b22<<b33<<b44<<endl;
	//printf("%i",a11&a22);
        for (int q = 0; q < N; q++) {
		string temp = mask[q];
		char mask1[5]=""; char mask2[5]=""; char mask3[5]=""; char mask4[5]="";
		for (int i = 0, k = 1, j = 0; i < temp.length(); i++){
		if (temp[i]=='.') { k++; j = 0; i++; }
		switch(k) {
		case 1:{
		mask1[j] = temp[i]; j++;
		break;
		}
		case 2:{
		mask2[j] = temp[i]; j++;	
		break;
		}
		case 3:{
		mask3[j] = temp[i]; j++;
		break;
		}
		case 4:{
		mask4[j] = temp[i]; j++;
		break;
		}
		}	 	
		}
		int mask11 = atoi(mask1); int mask22 = atoi(mask2); int mask33 = atoi(mask3); int mask44 = atoi(mask4);
		int res1 = mask11 & a11;  int res2 = mask22 & a22; int res3 = mask33 & a33; int res4 = mask44 & a44;
		int res5 = mask11 & b11;  int res6 = mask22 & b22; int res7 = mask33 & b33; int res8 = mask44 & b44;
		if ((res1==res5) && (res2==res6) && (res3==res7) && (res4==res8)) countres++;
	}
	cout<<countres<<endl;
}


int main(){
	int N,M;
	string two_ip;
	vector<string>mask;
	string temp1; 	string temp2;  string temp3;
	cin>>N;
	for (int i = 0; i < N; i++) { 
	cin>>temp1;
	mask.push_back(temp1);
	}
	cin>>M;
	for (int i = 0; i < M; i++) {
	cin>>temp2; cin>>temp3;
	asd(temp2,temp3,mask,N);
	}
	//for (int i = 0; i < mask.size(); i++) cout<<mask[i]<<endl;
	return 0;
}