#include <bits/stdc++.h>

using namespace std;

bool IsLetter(char temp[]) {
	if ((((int)(temp[0])>=65) && ((int)(temp[0])<=90)) || (((int)(temp[0])>=97) && ((int)(temp[0])<=122))) return 1; else return 0;
}

int main() {
	char a;  int sum = 0;
	char b;
	char c;
	cin>>a>>b>>c;
	if (IsLetter(&a)==1) sum++;
        if (IsLetter(&b)==1) sum++;
	if (IsLetter(&c)==1) sum++;
	cout<<sum;
	return 0;
}