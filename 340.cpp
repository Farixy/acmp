#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"
#include "cstring"

using namespace std;

int main() {                                                 
	int A[3];
	int B[3];
	for (int i = 0; i < 3; i++) cin>>A[i];
	for (int i = 0; i < 3; i++) cin>>B[i];
	sort(A,A+3);
	sort(B,B+3);
	if ((A[0]==B[0]) && (A[1]==B[1]) && (A[2]==B[2])) { cout<<"Boxes are equal"; return 0;}
	if (((A[0]-B[0])>=0) && ((A[1]-B[1])>=0) && ((A[2]-B[2])>=0)) cout<<"The first box is larger than the second one"; else
        if (((B[0]-A[0])>=0) && ((B[1]-A[1])>=0) && ((B[2]-A[2])>=0)) cout<<"The first box is smaller than the second one"; else cout<<"Boxes are incomparable";
	//for (int i = 0; i < 3; i++) cout<<A[i]<<" ";
	//for (int i = 0; i < 3; i++) cout<<B[i]<<" ";
	
	return 0; 	
}