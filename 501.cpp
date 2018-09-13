#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int N; int x1,x2,y1,y2; int a,b,c,d; int count=0; int sum = 0;
	int A[110][110]; int B[110][110];
	cin>>N;
	for (int j = 0; j <=108; j++) for (int k = 0; k <=108; k++) A[j][k]=0;
	for (int i = 0; i < N; i++) {
	cin>>a>>b>>c>>d;
	int xxx1 = min(a,c);	 
	int yyy1 = min(b,d); 
	int xxx2 = max(a,c); 
	int yyy2 = max(b,d);
	for (int j = xxx1+1; j <=xxx2; j++) for (int k = yyy1+1; k <=yyy2; k++) A[j][k]++;
	}
	cin>>x1>>y1>>x2>>y2;
	int xx1 = min(x1,x2);	 
	int yy1 = min(y1,y2); 
	int xx2 = max(x1,x2); 
	int yy2 = max(y1,y2); 
	for (int j = xx1+1; j <=xx2; j++) for (int k = yy1+1; k <=yy2; k++) {
        sum = sum + A[j][k];
	}
        //for (int j = x1; j <=x2; j++) for (int k = y1; k <=y2; k++) 
	
	/*
        for (int i = 0; i <= 30; i++) {
	for (int j = 0; j <= 30; j++) {
	cout<<A[i][j]<<" ";
	}
	cout<<endl;
	}
	*/
	cout<<sum;
	return 0;
}