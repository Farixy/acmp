#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
long long int x,a,i=0,k,j,ost[100],b[5],n,p,y,t=0,drob[100]; long double d=0;
char s[256];
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);

p=0;
scanf("%lli",&a);
scanf ("%lli",&y);
scanf("%s",&s);
n=strlen(s);
k=n;

if (a<2 || a>16 || y<2 || y>16 || s[0]=='.') //check bad input
{
printf ("bad input"); return 0;
exit(1);
}

for (j=0 ; j<n ; j++) //check bad input
if ( s[j] >= a+48 )
{
if ((s[j]>64 && a+55>s[j]) || (s[j]>=97 && a+87>s[j])) i=0; else
{
printf ("bad input"); return 0;
exit(1);
}
}

if (k==n-1 && s[k]=='.' || s[k+1]=='.') //check bad input
{
printf ("bad input");
return 0;
exit (1);
}

//Otdelenie drob i seloy
for (j=0 ; j<n ; ++j)
{
if (s[j]=='.')
{
k=j;
break;
}
}
//end

//perevod drobnoi v 10cc
for (j=k+1 ; j<n ; ++j)
{
if (s[j]>=65 && s[j]<90)
d=d+((s[j]-55)/powl(a,j-k));
else if (s[j]<65)
d=d+(s[j]-48)/(powl(a,j-k));
else if (s[j]>=97)
d=d+((s[j]-87)/powl(a,j-k));
}
//printf ("%lf\n",d);
//end

//perevod drobnoi iz 10cc v zadannuiy
while ( d!=0 && t!=12)
{
if (d*y > 9)
{
drob[t]=floor(d*y)+55;
d=d*y-floor(d*y);
}
else if ( d*y >= 1 )
{
drob[t]=floor(d*y)+48;
d=d*y-floor(d*y);
}
else
{
drob[t]=48;
d=d*y;
}
++t;
}
//end

//perevod seloi v 10cc
for (i=k-1 ; i>=0 ; --i) {
if (s[k-1-i]>=65 && s[k-1-i]<90 )
p=p+pow(a,i)*(s[k-1-i]-55);
else if ( s[k-1-i] < 65 )
p=p+pow(a,i)*(s[k-1-i]-48);
else
p=p+pow(a,i)*(s[k-1-i]-87);
}

// printf ("%lli\n",p);
//end

x=p;
i=0;

//perevod iz 10cc v zadannuyi selaya
while (x>0)
{
if (x%y > 9)
{
ost[i]=x%y+55;
}
else
ost[i]=x%y+48;
i++;
x=x/y;
}
//end

for ( j=i-1 ; j>=0 ; --j ) //vuvod seloi
putchar(ost[j]);

if (s[0]==48) printf("0");
if (k!=n && t!=0) printf (".");

for ( i=0 ; i<t ; i++ ) //vuvod drobnoi
putchar(drob[i]);

return 0;
}