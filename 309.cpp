#include "iostream"
#include "stdlib.h"
#include "algorithm"

using namespace std;

long long Perevert(long long x) {
   long y = 0;
   while(x) {
       y = y*10 + x%10;
       x /= 10;
   }
   return y;
}


int main() {
        long long number,number_down;
	cin>>number;
	int k=0;
	for (int i = 0; i<number;i++) {
	number_down = Perevert(i);
	if ((number_down+i)==number) k++;
	}
	cout<<k;
	return 0;	
}