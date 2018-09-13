#include <bits/stdc++.h>

using namespace std;

void sort1(string &a, int n){  // Sort Min
       
       for(int i = 0 ; i < n - 1; i++) { 
       for(int j = 0 ; j < n - i - 1 ; j++) {  
           if((a[j] > a[j+1])) {            
              int tmp = a[j];
              a[j] = a[j+1] ;
              a[j+1] = tmp; 
} } } 
	
	for(int i = 1; i < n; i++) {
	if (a[i]>'0') {
	int tmp = a[1];
	a[1] = a[i];
	a[i] = tmp;
	break;
	}
	}
	
	}

void sort3(string &a, int n){  // Sort Min
       for(int i = 0 ; i < n - 1; i++) { 
       for(int j = 0 ; j < n - i - 1 ; j++) {  
           if((a[j] > a[j+1]) && (a[j+1]!='0')) {            
              int tmp = a[j];
              a[j] = a[j+1] ;
              a[j+1] = tmp; 
} } } }

void sort2(string &a, int n){  // Sort Max
       for(int i = 0 ; i < n - 1; i++) { 
       for(int j = 0 ; j < n - i - 1 ; j++) {  
           if((a[j] < a[j+1]) && (a[j]!='-')) {            
              int tmp = a[j];
              a[j] = a[j+1] ;
              a[j+1] = tmp; 
} } } }

int main() {
	string a; string b; long long a1,b1;
	cin>>a;
	cin>>b;
	
	if (atoi(a.c_str())>0) sort2(a,a.length()); else sort1(a,a.length());
	if (atoi(b.c_str())>0) sort3(b,b.length()); else sort2(b,b.length());
	//for (int i = 0; i < a.length();i++) cout<<a[i];
	//cout<<endl;
	//for (int i = 0; i < b.length();i++) cout<<b[i];
	//cout<<endl;
	//cout<<atoi(a.c_str())<<" "<<cout<<atoi(b.c_str())<<endl;
	cout<<static_cast<int>(atoi(a.c_str())-atoi(b.c_str()));
	
	return 0;	
}