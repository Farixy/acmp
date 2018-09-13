#include <stdio.h>

using namespace std;

int main(){
	int A[100000];
	int N,M; int x,y;
	scanf("%d %d",&N,&M);
	if ((N==0) || (M==0)) { return 0;}
	for (int i = 0; i < 100000; i++) A[i] = 0;
	for (int i = 0; i < N; i++) { scanf("%d",&x); A[x] = 1;}
	for (int i = 0; i < M; i++) { scanf("%d",&y); if (A[y]==1) A[y]=2;}
	for (int i = 0; i < 100000; i++) if (A[i]==2) printf("%d ",i);	
	return 0;
}