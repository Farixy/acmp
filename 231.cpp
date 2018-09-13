#include <bits/stdc++.h>

using namespace std; 

int main() { 
	char A[255];char temp1[2];int number; int check = 0;int flag = 0; int count = 0;
	cin>>A;
	for( int i = 0; i < strlen(A);i++){
	check = 0;
	flag = 0;
	if (isdigit(A[i])) {
	temp1[1] = A[i+1]; number = (static_cast<int>(A[i])-48);  check = 1; flag = 1;
	} 
	if ((isdigit(A[i])) && (isdigit(A[i+1]))) { 
	temp1[1] = A[i+2]; number = (static_cast<int>(A[i])-48)*10+(static_cast<int>(A[i+1])-48); check = 1; i = i + 1;
	} 
	if (check == 1) {
	i = i + 1;
	for (int j = 0; j <number;j++) { 
	//cout<<j<<" "<<temp1[1]<<" "; 
	cout<<temp1[1];
	count++;
	if ((count % 40)==0) cout<<endl;
	}
	} else if ((isalpha(A[i])) && ((isdigit(A[i+1])) || (A[i+1]=='\0') || isalpha(A[i+1])) && (flag == 0) ) {
	cout<<A[i];count++;
	if ((count % 40)==0) cout<<endl;
	} else {}
	
	
	//if ((isalpha(A[i])) && ((isdigit(A[i+1])) || (A[i+1]=='\0'))) {} else {cout<<A[i];}
	} 
	return 0;
}