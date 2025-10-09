#include <iostream>
#include <cstdlib>
using namespace std;
enum enPrimeOrNotPrime
{
	Prime = 1,
	NotPrime =2
};

int RondomNumber(int From, int To) {
	return (rand() % (To - From + 1) + From);
}

//enPrimeOrNotPrime Prime(int Number) {
//	int M = round(Number / 2);
//	for (int i = 2; i <= M; i++)
//	{
//		if (Number % i == 0)
//			return enPrimeOrNotPrime::NotPrime;
//
//	}
//	return enPrimeOrNotPrime::Prime;
//
//}
enPrimeOrNotPrime CheckPrime(int Number)
{
	if (Number <= 1)
		return enPrimeOrNotPrime::NotPrime;

	int M = sqrt(Number);
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimeOrNotPrime::NotPrime;
	}

	return enPrimeOrNotPrime::Prime;
}


void ReadArray(int arr[100], int& arrlength) {
	cout << "Enter Number  of eliments : \n";
	cin >> arrlength;
	int d1, d2;
	for (int i = 0; i < arrlength; i++)
	{
		d1 = RondomNumber(1, 9);
		d2 = RondomNumber(1, 9);
		arr[i] = d1 * 10 + d2;
	}

}

void PrintArray1(int arr[100], int arrlength) {
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";
	}
}

void CreateArray2(int arr[100], int arrlength, int arr2[100], int &arrlength2) {

	for (int i = 0; i < arrlength; i++)
	{
		if (CheckPrime(arr[i]) == enPrimeOrNotPrime::Prime) {
			arr2[arrlength2] = arr[i];
			arrlength2++;
		}
	}
}

void PrintArray2(int arr2[100], int arrlength2) {
	for (int i = 0; i < arrlength2; i++)
	{
		cout << arr2[i] << " ";
	}
}


int main()
{
	srand((unsigned)time(NULL));
	int arr[100];
	int arrlength;
	int arr2[100];
	int arrlength2 = 0;



	ReadArray(arr, arrlength);
	cout << "Array 1  Eliments :" << endl; PrintArray1(arr, arrlength);
	CreateArray2(arr, arrlength, arr2, arrlength2);
	cout << "\nProme Number Is Array 2 :" << endl; PrintArray2(arr2, arrlength2);




	return 0;
}
