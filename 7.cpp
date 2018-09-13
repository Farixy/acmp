#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"
#include "cstring"

using namespace std;

string maxNum(const string &left, const string &right) {
	if (left.size() > right.size()) return left;
	if (right.size() > left.size()) return right;
	int cmp = left.compare(right);
	if (cmp >= 0) return left; else return right;
}
int main() {
	char buffer1[101 + 1];
	char buffer2[101 + 1];
	char buffer3[101 + 1];
	scanf("%101s %101s %101s", buffer1,buffer2,buffer3);
	string num1(buffer1);
	string num2(buffer2);
	string num3(buffer3);
	printf("%s", maxNum(maxNum(num1,num2),num3).c_str());
	return 0; 	
}