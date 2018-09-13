#include <bits/stdc++.h>

using namespace std;

int main() {
	char A[80];
	char B[80];
	char C[80];   int count = 0; int sum = 0;
	int number[10];
	int number1[10];
	for (int i = 0; i <=9; i++) number[i] = 99;
	for (int i = 0; i <=9; i++) number1[i] = 99;
	cin>>A;
	cin>>B;
	cin>>C;
	for (int i = 0; i < strlen(A);i++)	
        for (int j = 0; j < strlen(B);j++)
	for (int k = 0; k < strlen(C);k++) if ((A[i]==B[j]) && (B[j]==C[k])) 
	{
	number[static_cast<int>(A[i])-48] = static_cast<int>(A[i])-48;
	number1[static_cast<int>(A[i])-48] = 1;
	}
	//for (int i = 0; i <=9; i++) 
	for (int i = 0; i <=9; i++) if (number1[i]==1) sum = sum + number1[i]; 
	cout<<sum<<endl;
	sort(number,number+9);
	for (int i = 0; i <=9; i++) {
	if ((number[i]==0) || (number[i]==1) || (number[i]==2) || (number[i]==3) || (number[i]==4) || (number[i]==5) ||  (number[i]==6) ||(number[i]==7) || (number[i]==8) || (number[i]==9)) cout<<number[i]<<" ";
	}
	return 0;
}