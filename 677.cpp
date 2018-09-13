#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "math.h"

using namespace std;

// Home 1     Yes
// School 2   No
bool hasFractionalPart(double val){
    return val - floor(val) > 0 ;
}

int main() {
	int K,N,M,D; float buf1,buf2,buf3,buf4; int result,result1; int answer;
	cin>>K>>N>>M>>D;
	//for (int i = 1; i < 100; i++) for (int j = 1; j < 100; j++) for (int k = 1; k < 100; k++){
	for (int i = 1; i < 10000000; i++)  {
	buf1 = i/K;
	buf2 = i/N;
	buf3 = i/M;
	result = D+buf1+buf2+buf3;
	if ((result == i) && (result%K==0) && (result%N==0) && (result%M==0)) { answer = i; result1 = result; } //else answer = -1;
	
	//printf("%f ",result);
	//if ((buf1%K==0) && (buf2%N==0) && (buf3%M==0) && (i!=1) && (j!=0) && (k!=0)) { cout<<buf1<<" "<<buf2<<" "<<buf3<<endl; return 0;}
	//if ((hasFractionalPart(buf1)==1)&&(hasFractionalPart(buf2)==1)&&(hasFractionalPart(buf3)==1)) cout<<"nashel";
	}
	if ((answer==result1) && ((result1/K+result1/N+result1/M+D)==result1)) cout<<answer; else cout<<"-1";
	return 0;	
}