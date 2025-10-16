#include <iostream>
#include <cstdlib>
using namespace std;


int RondomNumber(int From, int To) {
	return (rand() % (To - From + 1) + From);
}

void ReadArray(int arr[100], int arrlength) {

	int d1, d2;
	for (int i = 0; i < arrlength; i++)
	{
		
		arr[i] = RondomNumber(-100,100);
	}

}
void PrintArray1(int arr[100], int arrlength) {
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";
	}
}

int CounterArray1(int arr[100], int arrlength) {
	int counter = 0;
	for (int i = 0; i < arrlength; i++)
	{
		if (arr[i] < 0) {
			counter++;
		}
	}
	return counter;
}



int main()
{
	srand((unsigned)time(NULL));
	int arr[100];
	int arrlength;
	cout << "Enter Number  of eliments : \n";
	cin >> arrlength; 
	



	ReadArray(arr, arrlength);
	cout << "\nArray 1  Eliments :" ; PrintArray1(arr, arrlength);
	cout << "\nEven Number Count is  :"; cout << CounterArray1(arr, arrlength);

	
	return 0;
}
