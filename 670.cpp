#include <bits/stdc++.h>

using namespace std;

bool check(int n) {
	int temp1, temp2, temp3, temp4, temp5;
	temp5 = n / 10000; 
	temp4 = (n / 1000) % 10;
	temp3 = (n / 100) % 10;
	temp2 = (n / 10) % 10;
	temp1 = n % 10;
	//cout<<temp1<<" "<<temp2<<" "<<temp3<<" "<<temp4<<" "<<temp5; 
	if ((n>=0)&&(n<10)) return true;
	if ((n>=10)&&(n<100)) { if (temp1==temp2) return false; else return true; }
	if ((n>=100)&&(n<1000)) { if ((temp1!=temp2) && (temp1!=temp3) && (temp2!=temp3)) return true; else return false;}
	if ((n>=1000)&&(n<10000)) { if ((temp1!=temp2) && (temp1!=temp3) && (temp1!=temp4) && (temp2!=temp3) && (temp2!=temp4) && (temp3!=temp4)) return true; else return false; }
	if ((n>=10000)&&(n<100000)) { if ((temp1!=temp2) && (temp1!=temp3) && (temp1!=temp4) && (temp1!=temp5) && (temp2!=temp3) && (temp2!=temp4) && (temp2!=temp5) &&(temp3!=temp4) && (temp3!=temp5) && (temp4!=temp5)) return true; else return false;}
}

int main(){
	int N; 
	cin>>N;	
        //int *A = new int [10010];
	int A[10010];
	int j = 0;
	//26100
	for (int i = 1; i <= 26080;i++){
	if (check(i)==1) { A[j] = i; j++;}
	}
	//for (int i = 0; i < N;i++) cout<<A[i]<<" ";
	
	cout<<A[N-1];
        //delete [] A;

	return 0;
}