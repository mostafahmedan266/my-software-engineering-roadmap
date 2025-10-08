#include<iostream>
#include<cmath>
#include<string>
using namespace std;


struct StrInfo
{
	string LastName;
	string FirstName;
	int Age;
	string Phone;
};
void ReadInfo(StrInfo &Info) {
	cout << "Pleas Enter LastName" << endl;
	cin >> Info.LastName;
	cout << "Pleas Enter FirstName" << endl;
	cin >> Info.FirstName;
	cout << "Pleas Enter Age" << endl;
	cin >> Info.Age;
	cout << "Pleas Enter Phone" << endl;
	cin >> Info.Phone;
}

void PrintInfo(StrInfo Info) {
	cout << "*************************************"<<endl;
	cout << "LastName :" << Info.LastName << endl;
	cout << "FirstName :" << Info.FirstName << endl;
	cout << "Age :" << Info.Age << endl;
	cout << "Phone :" << Info.Phone << endl;
	cout << "*************************************" << endl;

	
}

void ReadPreson(StrInfo Person[2]) {
	ReadInfo( Person[0]);
	ReadInfo(Person[1]);
}

void PrintPerson(StrInfo Person[2]) {
	PrintInfo(Person[0]);
	PrintInfo(Person[1]);

}

int main() {

	StrInfo Person[2];
	ReadPreson(Person);
	PrintPerson(Person);
	return 0; 
}