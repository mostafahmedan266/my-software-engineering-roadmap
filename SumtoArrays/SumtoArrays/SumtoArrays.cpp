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

void ReadArray(int arr[100], int arrlength) {
	
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

void SumArray1ToArray2(int arr3[100], int arr[100], int arr2[100], int arrlength) {
	for (int i = 0; i < arrlength; i++)
	{
		arr3[i] = arr[i] + arr2[i];
	}
}
void PrintArray3(int arr3[100], int arrlength) {
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr3[i] << " ";
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100];
	int arrlength;
	cout << "Enter Number  of eliments : \n";
	cin >> arrlength;
	int arr2[100];
	int arr3[100] ;



	ReadArray(arr, arrlength);
	cout << "Array 1  Eliments :" << endl; PrintArray1(arr, arrlength);

	ReadArray(arr2, arrlength);
	cout << "\nArray 2  Eliments :" << endl; PrintArray1(arr2, arrlength);
	
	SumArray1ToArray2(arr3, arr, arr2, arrlength);
	cout << "\n\n sum of array1 and array2 eliments : " << endl; PrintArray3(arr3, arrlength);


	return 0;
}
