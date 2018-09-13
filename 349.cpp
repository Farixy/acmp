#include <iostream>
using namespace std;
int main()
{
  int m;
  int n;
  int result = 0;
  cin >> m >> n;
  int *a = new int[n + 1];
  for (int i = 0; i < n + 1; i++)
    a[i] = i;
  for (int p = 2; p < n + 1; p++)
  {
    if (a[p] != 0)
    {
      if ((a[p]>=m) && (a[p]<=n)) { cout << a[p] <<" "; result = 1;}
      for (int j = p*p; j < n + 1; j += p)
        a[j] = 0;
    }
  }
  if  (result==0) cout<<"Absent";
  return 0;
}