#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int HH=0; int MM=0; int HH1=0; int MM1=0; int tempHH=0,tempMM=0;
	char A[10];
	cin>>A;
	cin>>HH>>MM;
	HH1 = static_cast<char>(A[0]-48)*10+static_cast<int>(A[1]-48);
	MM1 = static_cast<char>(A[3]-48)*10+static_cast<int>(A[4]-48);
	//cout<<HH1<<endl<<MM1<<endl;
	tempHH = (HH1 + HH)%24;
	tempMM = (MM1 + MM)%60;
	if ((MM1+MM)>=60) tempHH = (tempHH+1) % 24;
	if (tempHH<10) cout<<"0"<<tempHH; else cout<<tempHH;
	cout<<":"; 
	if (tempMM<10) cout<<"0"<<tempMM; else cout<<tempMM;	
	return 0;	
}