#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int X,Y,Z,W; int count = 0;
	cin>>X>>Y>>Z>>W;
	for (int i = 0; i <= W; i++)
	for (int j = 0; j <= W; j++) if ((i*X+j*Y+(W-i-j))==W)  count++;
	cout<<count;
	return 0;
}