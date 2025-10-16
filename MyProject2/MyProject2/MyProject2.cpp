#include <iostream>
#include <string>
using namespace std;

struct StrInfo
{
	string LastName;
	string FirstName;
	int Age;
	string Phone;

};

void ReadArrayInfo(StrInfo  &Info) {
	cout << "please Enter LastName" << endl;
	cin >> Info.LastName;
	cout << "please Enter FirstName" << endl;
	cin >> Info.FirstName;
	cout << "please Enter Age" << endl;
	cin >> Info.Age;
	cout << "please Enter Phone" << endl;
	cin >> Info.Phone;
}

void PrintArrayInfo(StrInfo Info ,int length) {
	cout << "Person" << length << "info" << endl;
	cout << "********************************" << endl;
	cout << " LastName :"<< Info.LastName << endl;
	cout << "FirstName :"<< Info.FirstName << endl;
	cout << "Age :"<< Info.Age << endl;
	cout << "Phone :"<< Info.Phone << endl;
	cout << "********************************" << endl;
}


void ReadPersonInfo(StrInfo Person[100] ,int length) {
	for (int i = 1; i <= length; i++) {
		ReadArrayInfo(Person[i]);
	}
}

void PrintPersonInfo(StrInfo Person[100], int length) {
	for (int i = 1; i <= length; i++) {
		PrintArrayInfo(Person[i],i);
	}
}

int main() {
	int i;
	cout << "Pleas Enter Inpot Person" << endl;
	cin >> i;
	StrInfo Person[100];
	ReadPersonInfo(Person,i);
	PrintPersonInfo(Person,i);



    return 0;
}
