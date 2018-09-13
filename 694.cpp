#include "iostream"
#include "stdio.h"
#include "stdlib.h"

using namespace std;

int main() {
	int N; int a,b; int kol=0;
	bool check=false;
	long long A[110][100];
	cin>>N;
	
	for (int i = 1; i <= N; i++) 
	for (int j = 1; j <= 31; j++) A[i][j]=0;
	for (int i = 1; i <= N; i++) {
	   cin>>a>>b;
	   for (int j = a; j <= b; j++) A[i][j] = j;
	}
	if (N==1) { cout<<"YES"; return 0;}
	/*
        for (int i = 1; i <= N; i++) {
	for (int j = 1; j <= 9; j++) cout<<A[i][j]<<" ";
	cout<<endl;
	}
	*/
	int sum1=0; int s[100];
	for (int i = 1; i <= 31; i++) s[i]=0;
	for (int i = 1; i <= N; i++) {
	for (int j = 1; j <= 31; j++) {
	s[j]=s[j]+A[i][j];
	}
	}
	//for (int i = 1; i <= 9; i++) cout<<s[i]<<" ";
	if (s[1]==N*1) check=true;
	if (s[2]==N*2) check=true;
	if (s[3]==N*3) check=true;
	if (s[4]==N*4) check=true;
	if (s[5]==N*5) check=true;
	if (s[6]==N*6) check=true;
	if (s[7]==N*7) check=true;
	if (s[8]==N*8) check=true;
	if (s[9]==N*9) check=true;
	if (s[10]==N*10) check=true;
	if (s[11]==N*11) check=true;
	if (s[12]==N*12) check=true;
	if (s[13]==N*13) check=true;
	if (s[14]==N*14) check=true;
	if (s[15]==N*15) check=true;
	if (s[16]==N*16) check=true;
	if (s[17]==N*17) check=true;
	if (s[18]==N*18) check=true;
	if (s[19]==N*19) check=true;
	if (s[20]==N*20) check=true;
	if (s[21]==N*21) check=true;
	if (s[22]==N*22) check=true;
	if (s[23]==N*23) check=true;
	if (s[24]==N*24) check=true;
	if (s[25]==N*25) check=true;
	if (s[26]==N*26) check=true;
	if (s[27]==N*27) check=true;
	if (s[28]==N*28) check=true;
	if (s[29]==N*29) check=true;
	if (s[30]==N*30) check=true;
	if (s[31]==N*31) check=true;

	if (check==true) cout<<"YES"; else cout<<"NO";

	/*
	for (int i = 1; i <= N; i++) { 
	for (int j = 1; j <= 9; j++) if ((A[i][j] == A[i+1][j]) && (A[i][j]!=0)) check=true;
	}
	if (check==true) cout<<"YES"; else cout<<"NO";
	*/
	/*
	for (int i = 0; i < N; i++)
	for (int j = 0; j < N; j++) {
	if ((A[i]<=A[j]) && (B[i]>=B[j])) check = true;
	}
	if (check == true ) cout<<"Yes"; else cout<<"No";
	*/
	return 0;	
}