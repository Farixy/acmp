#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"
#include "cstring"

using namespace std;

int main() {                                                 
        char input[5];
	cin>>input;
	int x1=0,x2=0,y1=0,y2=0; int count1=0;
	y1 = input[1]; y2 = input[4];
	// C7-D5
	if ((input[0]=='A')||(input[0]=='B')||(input[0]=='C')||(input[0]=='D')||(input[0]=='E')||(input[0]=='F')||(input[0]=='G')||(input[0]=='H')) count1++; else count1--; 
	if ((input[3]=='A')||(input[3]=='B')||(input[3]=='C')||(input[3]=='D')||(input[3]=='E')||(input[3]=='F')||(input[3]=='G')||(input[3]=='H')) count1++; else count1--;
	if ((input[1]=='1')||(input[1]=='2')||(input[1]=='3')||(input[1]=='4')||(input[1]=='5')||(input[1]=='6')||(input[1]=='7')||(input[1]=='8')) count1++; else count1--;
	if ((input[4]=='1')||(input[4]=='2')||(input[4]=='3')||(input[4]=='4')||(input[4]=='5')||(input[4]=='6')||(input[4]=='7')||(input[4]=='8')) count1++; else count1--;
	if ((input[2]=='-')) count1++; else count1--;
	if (count1!=5) {cout<<"ERROR";return 0;}
	 
	switch(input[0]) {
	case 'A':{x1 = 1; break;}
	case 'B':{x1 = 2; break;}
	case 'C':{x1 = 3; break;}
	case 'D':{x1 = 4; break;}
	case 'E':{x1 = 5; break;}
	case 'F':{x1 = 6; break;}
	case 'G':{x1 = 7; break;}
	case 'H':{x1 = 8; break;}
	}
	switch(input[3]) {
	case 'A':{x2 = 1; break;}
	case 'B':{x2 = 2; break;}
	case 'C':{x2 = 3; break;}
	case 'D':{x2 = 4; break;}
	case 'E':{x2 = 5; break;}
	case 'F':{x2 = 6; break;}
	case 'G':{x2 = 7; break;}
	case 'H':{x2 = 8; break;}
	}
	if ((abs((x2-x1)*(y2-y1)))==2) cout<<"YES"; else cout<<"NO";  
	return 0; 	
}