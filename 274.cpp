#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int factor_digits(long long num, int *digits)
{
    int digits_count = 0; int temp;
    // Отдельно обрабатываем ситуацию, когда число изначально равно нулю
    if (num == 0) {
        digits[0] = 0;
        return 1;
    }
    // Последовательно извлекаем цифры числа, пока они есть
    while (num > 0) {
        // Копируем очередную цифру в массив
        temp = num % 10;
	digits[temp] = 1;
        // Переходим к следующей цифре
        num /= 10;
   }
   return num ? 0 : digits_count;
}

int main(){
	long long A,B; int check_A[10]; int check_B[10];
	int count = 0; int sum1=0,sum2=0;
	int N;
	cin>>N;
	for (int q = 0; q < N;q++) {
	count = 0; sum1 = 0; sum2 = 0;
	for (int k = 0; k < 10;k++) { check_A[k]=0; check_B[k]=0; }
	cin>>A>>B;
	factor_digits(A, check_A);
	factor_digits(B, check_B);
	//for (int i = 0; i <= 9; i++) { printf("%d ", check_A[i]);}
	//cout<<endl;
	//for (int i = 0; i <= 9; i++) { printf("%d ", check_B[i]);}
	for (int k = 0; k < 10;k++) { 
	if (check_A[k]==1) sum1++; 
	if (check_B[k]==1) sum2++;
	}
	//cout<<sum1<<" "<<sum2<<endl;
	for (int k = 0; k < 10;k++) if ((check_A[k]==1) && (check_B[k]==1)) count++;
	//cout<<count<<endl;
	if (max(sum1,sum2)==count) cout<<"YES"<<endl; else cout<<"NO"<<endl;
	for (int k = 0; k < 10;k++) { check_A[k]=0; check_B[k]=0; }
	}
	return 0;
}