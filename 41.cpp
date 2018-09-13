#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int D[201]={0};
	int N=0;  int temp = 0;
	scanf("%d",&N);
	for (int i = 0; i < N;i++){
	scanf("%d",&temp);
	D[temp+100]+=1;
	}
	for (int x = 0; x<201;x++) for (int i = 0; i < D[x]; i++) printf("%d ",x-100);
	//sort(D,D+N);
	//for (int i = 0; i < N;i++) cout<<D[i]<<" ";
	return 0;	
}