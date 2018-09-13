#include <iostream> 
#include <cstring> 

using namespace std; 

int main() { 
	char a[10];
	for (int i = 0; i < strlen(a);i++) a[i]=0;
	cin>>a;
	if ((a[0]=='x') && (a[3]=='=')) if (a[1]=='+') cout<<(a[4]-48)-(a[2]-48); else cout<<(a[4]-48)+(a[2]-48);
	if ((a[2]=='x') && (a[3]=='=')) if (a[1]=='+') cout<<(a[4]-48)-(a[0]-48); else cout<<-(a[4]-48)+(a[0]-48);
	if ((a[4]=='x') && (a[3]=='=')) if (a[1]=='+') cout<<(a[0]-48)+(a[2]-48); else cout<<(a[0]-48)-(a[2]-48);

	if ((a[0]=='x') && (a[1]=='=')) if (a[3]=='+') cout<<(a[4]-48)+(a[2]-48); else cout<<(a[2]-48)-(a[4]-48);
	if ((a[2]=='x') && (a[1]=='=')) if (a[3]=='+') cout<<(a[0]-48)-(a[4]-48); else cout<<(a[4]-48)+(a[0]-48);
	if ((a[4]=='x') && (a[1]=='=')) if (a[3]=='+') cout<<(a[0]-48)-(a[2]-48); else cout<<(a[0]-48)-(a[2]-48); 
}