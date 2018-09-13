#include "iostream"
#include "stdio.h"
#include "stdlib.h"

using namespace std;

int main() {
	int N;
	float V[100];
	float p[100];
	float max1 = 0; int index;
	cin>>N;
	for (int i = 0; i < N; i++) cin>>V[i];
	for (int i = 0; i < N; i++) cin>>p[i];
	for (int i = 0; i < N; i++) V[i] = (V[i] * p[i]) / 100;
	for (int i = 0; i < N; i++) if (max1<V[i]) { max1 = V[i]; index = i+1;}
	cout<<index;
	
	return 0;	
}