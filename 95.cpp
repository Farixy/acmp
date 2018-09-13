#include <iostream> 
#include <cstring> 

using namespace std; 

int main() { 
	string a; 
	int i,sum=0,k=0; 
	cin >> a; 
	while (a.size() > 1) { 
	for (i = 0; i < a.size(); i++) { 
	sum += a[i] - 48; 
	} 
	a = to_string(sum); 
	sum = 0; 
	k++; 
	} 
	cout << a << " " << k << endl; 
}