#include<vector>
#include <iostream>
using namespace std;
int ReadNumber() {
	cout << "Please Enter Nnumber ?";
	int N;
	do
	{
		cin >> N;
	} while (N<=0);
	return N;
}
void PrintArray(vector <int> &VNumber) {
	
	char C = 'y';
	do
	{
		int x = ReadNumber();
		VNumber.push_back(x);
		cout << "do you want Add Number ? Y/N?";
		cin >> C;
	} while (C == 'y' || C == 'Y');

	cout << "All Array Number =  ";

	for (int& n : VNumber)
		cout << n << "  ";
}
int main()
{

	vector <int> VNumber;
	PrintArray(VNumber);
	
}

