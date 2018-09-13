#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int N,M; int red = 0; int green = 0; int blue = 0; int black = 0;
    cin>>N>>M;
    int **A = new int* [N+1]; // две строки в массиве
        for (int count = 0; count < N+1; count++)
        A[count] = new int [M+1];
     
    for (int i = 1; i <= N; i++)
    for (int j = 1; j <= M; j++) A[i][j] = i * j;
    for (int i = 1; i <= N; i++)
    for (int j = 1; j <= M; j++) {
	if (((A[i][j]) % 5) == 0) { blue++; continue; }
	if (((A[i][j]) % 3) == 0) { green++; continue; }
	if (((A[i][j]) % 2) == 0) { red++; continue; }
	black++; 		
    }
     
    for (int count = 0; count < N; count++)
        delete [] A[count];
    cout<<"RED : "<<red<<endl;
    cout<<"GREEN : "<<green<<endl;
    cout<<"BLUE : "<<blue<<endl;
    cout<<"BLACK : "<<black;
    return 0;
}