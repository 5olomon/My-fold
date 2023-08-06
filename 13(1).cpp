#include<iostream>
#include <iomanip>
#include<time.h>
using namespace std;

int main() {
  system("color 02");
	srand(time(NULL));
	const int num = 5;
	int num1, num2;
	int arr[num];
	for (int i = 0; i < num; i++)
	{
		arr[i] = rand() % 10;
		cout << setw(3) << left << arr[i];
	}
		num1 = arr[0];
		num2 = arr[0];
	for (int j = 0; j < num; j++)
	{
		if (num1<arr[j]) {
			num1 = arr[j];
		}

	}
	for (int k = 0; k < num; k++)
	{
		if (num2>arr[k]) {
			num2 = arr[k];
		}

	}
		cout <<"\n" <<"Minimal number:" << num2;
		cout << "\n" <<"Maximal number:" << num1;
}