#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"

using namespace std;


int main() {
	char number1[5]; int result1=0;
	char number2[5]; int result2=0;
	cin>>number1>>number2;
	
	if (number1[0]==number2[0]) result1++;
	if (number1[1]==number2[1]) result1++;
	if (number1[2]==number2[2]) result1++;
	if (number1[3]==number2[3]) result1++;	
	for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++){
	if ((number1[i]==number2[j]) && (i!=j)) result2++;
	}
	cout<<result1<<" "<<result2<<endl;
	//cout<<number1[0]<<number1[1]<<number1[2]<<number1[3];
	//cout<<number1[0]<<endl;
	//cout<<number2[0]<<endl;
	return 0;	
}