#include <iostream>
#include <cstdlib>
using namespace std;


int ReadNumber(string Message) {
	cout << Message << endl; int N;
	do
	{
		cin >> N;
	} while (N<=0);
	return N;
}

int RondomNumber(int From, int To) {
	return (rand() % (To - From + 1) + From);
}

void Swap(int& A, int& B) {
	int Temp;
	Temp = A;
	A = B;
	B = Temp;
}

void ReadArray(int arr[100], int arrlength) {
	int D1 =0, D2 = 0;
	for (int i = 0; i < arrlength; i++)
	{
		D1 = RondomNumber(1, 9);
		D2 = RondomNumber(1, 9);
		arr[i] = D2*10+D1 ;
	}

}

void ReverseArray(int arr[100], int arrlength ,int arr2[100]) {
	int counter = 0;
	for (int i = arrlength-1; i >=0; i--)
	{
		
			arr2[counter] = arr[i];
			counter++;
		
	}
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr2[i] << " ";
	}

}
void PrintArray1(int arr[100], int arrlength) {
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";
	}
}



int main()
{
	srand((unsigned)time(NULL));
	int arr[100]; int arr2[100];
	int arrlength = ReadNumber("Enter Number  of eliments :");
	
	



	ReadArray(arr, arrlength);
	cout << "Array 1  Eliments :" << endl; PrintArray1(arr, arrlength);



	cout << "\n Swap Eliments :" << endl; ReverseArray(arr, arrlength,arr2);

	

	return 0;
}
