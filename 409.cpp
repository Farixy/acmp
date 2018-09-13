#include <iostream>
#include <stdio.h> 
using namespace std; 
int main() { 
double n,x,i,y,ans=0; 
cin >> n >> x; 
for (i = 0; i < n-1; i++) { 
cin >> y; 
ans += (x + y) / 2; 
x = y; 
} 
ans /= (n - 1); 
printf("%.6lf", ans); 
return 0; 
}