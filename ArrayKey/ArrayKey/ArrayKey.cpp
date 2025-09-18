#include <iostream>
#include <cstdlib>
using namespace std;


int ReadNumber(string Message) {
	cout << Message << endl; int N;
	do
	{
		cin >> N;
	} while (N <= 0);
	return N;
}

int RondomNumber(int From, int To) {
	return (rand() % (To - From + 1) + From);
}

string CreateKey() {
	string Word = "";
	for (int i = 0; i < 4; i++)
	{
		Word += char(RondomNumber(65, 90)); 
	}
	return Word;
}

string WordLineKey() {
	string Word = "";
	Word = CreateKey() + "-" + CreateKey() + "-" + CreateKey() + "-" + CreateKey();
	return Word;
}

void ReadArray(string arr[100], int arrlength) {
	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = WordLineKey();
	}

}
void PrintArray(string arr[100], int arrlength) {
	for (int i = 0; i < arrlength; i++)
	{
		cout << "Array [" << i << "] :"; 
		cout << arr[i] << endl;
	}

}




int main()
{
	srand((unsigned)time(NULL));
	const int key = 4;
	string arr[100];
	int arrlength = ReadNumber("How many keys do you want to generate?\n");

	ReadArray(arr, arrlength);
	PrintArray(arr, arrlength);


	


	


	return 0;
}
