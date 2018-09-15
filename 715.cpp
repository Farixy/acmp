#include <iostream>

using namespace std;

int main() {
	char a1[100][100];
	char a2[100][100];
	int n,m; int count_error = 0;
	cin>>n>>m;
	for (int i = 0; i < n; i++)
	for (int j = 0; j < m; j++) {
		cin>>a1[i][j];
	}
	for (int i = 0; i < n; i++)
	for (int j = 0; j < m; j++) {
		cin>>a2[i][j];
	}

	for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		if (a1[i][j]!=a2[i][j]) count_error++;
	}
	}
	cout<<n*m-count_error;
	return 0;
}