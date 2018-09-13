#include <bits/stdc++.h>
#include <ctype.h>

using namespace std;

bool sort_function (int i,int j) {
	return (i>j);
}

int main() {
	string N;
	cin>>N;
	sort(N.begin(),N.end(),sort_function);
	for (int i = 0; i < N.length()-2; i++) cout<<N[i];
    	return 0;	

}