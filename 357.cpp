   #include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
int l,n,sum=0,summ=0; 
string a; 
cin>>a; 
for(int i=1;i<a.length();i=i+2){ 
n=a[i]-48; 


sum=n+sum; 
} 
for(int i=0;i<a.length();i=i+2){ 
l=a[i]-48; 
summ=l+summ; 
} 
if(summ==sum){ 
cout<<"YES"; 
return 0; 
} 
else if(abs(sum-summ)%11==0){ 
cout<<"YES"; 
} 
else cout<<"NO"; 
return 0; 
} 
