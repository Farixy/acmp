#include "iostream"
#include "stdio.h"
#include "stdlib.h"

using namespace std;

// Home 1     Yes
// School 2   No


int main() {
	string location;
	int N;  bool check; int temp = 0; int station; int count = 0;
	cin>>location;
	cin>>N;
	if (location=="Home") station = 1; else station = 0;
	temp = N; 
	while(1) {
	if ((station == 1) && (temp!=0)) { temp = temp - 1; station = 0; }
	if ((station == 0) && (temp!=0)) { temp = temp - 1; station = 1; }
	
	if ((station == 0) && (temp == 0)) { temp = temp + N; temp = temp - 1; station = 1; }
	
	if ((station == 1) && (temp == 0)) { cout<<"Yes"; break; }
	count = count + 1;
	if (count == 1000) { cout<<"No"; break; }
	//if ((station == 0) && (temp == 0)) { cout<<"No"; break; }
	
	}
	
	
	return 0;	
}