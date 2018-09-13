#include <bits/stdc++.h>

using namespace std;

int main() {
	char time[5];
	cin>>time;
	int cc1,cc2; int count = 0;
	int mm1,mm2;
	cc1 = static_cast<int>(time[0]-48);
	cc2 = static_cast<int>(time[1]-48);
	mm1 = static_cast<int>(time[3]-48);
	mm2 = static_cast<int>(time[4]-48);
	if ((cc1>=2) && (cc2>=3) && (mm1>=3) && (mm2>2)) { cout<<"00:00"; return 0; } 
	//cout<<cc1<<cc2<<":"<<mm1<<mm2;
	for (int hour1 = cc1; hour1 <= 2; hour1++) 
	for (int hour2 = cc2; hour2 <= 9; hour2++)
	for (int minute1 = 0; minute1 <= 5; minute1++) 
	for (int minute2 = 0; minute2 <= 9; minute2++)
	//if (((hour1*10+hour2)<=23) && ((minute1*10+minute2)<=59)) cout<<hour1<<hour2<<":"<<minute1<<minute2<<" ";
	if (((hour1*10+hour2)<=23) && ((minute1*10+minute2)<=59)) if ((hour1==minute2) && (hour2==minute1)) {
	//count++;
	//if (count==2) 
	cout<<hour1<<hour2<<":"<<minute1<<minute2<<" ";
	
	}
	//if (((hour1*10+hour2)<=23) && ((minute1*10+minute2)<=59)) cout<<hour1<<hour2<<":"<<minute1<<minute2<<" ";
	
	
	//00:23
	return 0;
}