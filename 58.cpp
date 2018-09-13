#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int t = 0; int n,m; bool ok = true; int temp = 0;
	int t1[100][100];
	cin>>t;
	for (int i = 0; i < t; i++){
	ok = true;
	cin>>n>>m;
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) t1[i][j] = 0;
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin>>t1[i][j];
	for (int i = 0; i < n-1; i++) for (int j = 0; j < m-1; j++) {
	temp = (t1[i][j]+t1[i][j+1]+t1[i+1][j]+t1[i+1][j+1]);
	//cout<<temp;
	if ((temp % 4) == 0) { ok = false;}
	}
	if (ok) cout<<"YES"<<endl; else cout<<"NO"<<endl;
	}
	return 0;	
}