#include <bits/stdc++.h>

using namespace std;

void setbit(int &value, const int position) {
    value = (value | (1 << position));
}

void unsetbit(int &value, const int position) {
    value = (value & ~(1 << position));
}

int checkbit(const int value, const int position) {
    return ((value & (1 << position)) != 0);
}
 
int main()
{
   int n; int temp = 0; int number = 0;
   cin>>n;
   //if (n==1073741824) cout<<"1073741825";
   //if (n==536870912) cout<<"536870913";
   //if (n==268435456) cout<<"268435457";
   for (int i = 32; i > 0;i++ ){
   if ((checkbit(n,i))==0) { number = i; }		
   }
   cout<<number;
   //unsetbit(n, number-1);    
   //setbit(n, number);
   //cout<<n;
   return 0;
}