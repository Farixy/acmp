#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"
#include "cstring"

using namespace std;

int main() {
	char str[500]; int k=0;
	cin>>str;

	for (int i = 0; i < strlen(str);i++) {
	if ((str[i]=='>') && (str[i+1]=='>') && (str[i+2]=='-') && (str[i+3]=='-') && (str[i+4]=='>')) k++;
	if ((str[i]=='<') && (str[i+1]=='-') && (str[i+2]=='-') && (str[i+3]=='<') && (str[i+4]=='<')) k++;
	}
	cout<<k;                                        
	return 0;	
}