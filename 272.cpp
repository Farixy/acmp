#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "algorithm"
#include "fstream"

using namespace std;

int main() {
	ifstream in("input.txt");
	ofstream out("output.txt");
	int e; int count=1; int temp_max = -99999999; int temp_min = 999999999;
	do {
        
        in>>e;
        if (in.eof()) break;
        if (count % 2 == 0) {
        	if (temp_max<=e) temp_max = e;  
        } else if (temp_min>=e) temp_min = e;
        //cout<<e<<" ";
        count++;
        
	} while (!in.eof());
	//cout<<"temp_min = "<<temp_min<<endl;
	//cout<<"temp_max = "<<temp_max<<endl;
	//cout<<endl;
	out<<temp_min+temp_max;
	//system("PAUSE");
	return 0;	
}
