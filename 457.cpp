 #include <iostream> 
#include <stdio.h> 
#include <algorithm> 
using namespace std; 
bool comp(int c,int d) 
{ 
return c>d; 
} 
int main() 
{ 
freopen("input.txt","r",stdin); 
freopen("output.txt","w",stdout); 
int a; 
cin>>a; 
int ubiv[4],vozr[4],a1,a2,k=0; 
while(a!=6174) 
{ 
ubiv[0]=a/1000; 
ubiv[1]=a%1000/100; 
ubiv[2]=a%1000%100/10; 
ubiv[3]=a%1000%100%10; 
vozr[0]=a/1000; 
vozr[1]=a%1000/100; 
vozr[2]=a%1000%100/10; 
vozr[3]=a%1000%100%10; 
sort(ubiv,ubiv+4); 
sort(vozr,vozr+4,comp); 
a1=ubiv[0]*1000+ubiv[1]*100+ubiv[2]*10+ubiv[3]; 
a2=vozr[0]*1000+vozr[1]*100+vozr[2]*10+vozr[3]; 
a=a2-a1; 
k++; 
} 
cout<<6174<<endl; 
cout<<k; 
return 0; 
}