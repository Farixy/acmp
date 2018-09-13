#include <bits/stdc++.h>

using namespace std;

bool IsDigit1(char temp[]) {
	if (((int)(temp[0])>=48) && ((int)(temp[0])<=57)) return 1; else return 0;
}

int main() {
	char a;  int sum = 0;
	char b;
	char c;
	cin>>a>>b>>c;
	if (IsDigit1(&a)==1) sum++;
        if (IsDigit1(&b)==1) sum++;
	if (IsDigit1(&c)==1) sum++;
	cout<<sum;
	return 0;
}