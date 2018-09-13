#include <bits/stdc++.h>
int main() {
int a,gad=1; 
std::string b; 
std::cin>>a>>b; 
int c=b.length(); 
for(int i=a;i>0;i=i-c) gad=i*gad; 
std::cout<<gad;	
return 0;
}