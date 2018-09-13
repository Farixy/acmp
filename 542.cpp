#include <bits/stdc++.h>

using namespace std;
 
unsigned bitrev(unsigned n)
{
   unsigned r;
   
   for (r = 0; n; n >>= 1) {
      r <<= 1;
      r |= n & 1;
   }
   return r;
}
 
int main()
{
   int n;
   cin>>n;
   cout<<bitrev(n);
   return 0;
}