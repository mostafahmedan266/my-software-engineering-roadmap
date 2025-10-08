
#include <iostream>
using namespace std;

struct StrInfo
{
    int Age;
    bool HasDrivingLicense;
    bool Connection;
};
StrInfo ReadInfo() {
    StrInfo Info;
    cout << "Do You Have Connection:" << endl;
    cin >> Info.Connection;
    cout << "please enter age :" <<endl;
    cin >> Info.Age;
    cout << "Do You Have HasDrivingLicense:" << endl;
    cin >> Info.HasDrivingLicense;
    
    return Info;
}
bool IsAccepted(StrInfo Info) {
    if (Info.Connection) {
        return true;
    }
    else {
        return (Info.Age > 21 && Info.HasDrivingLicense );
    }
}
void PRintResults(StrInfo Info) {
    if (IsAccepted(Info)) {
        cout << "Hired \n";
    }
    else {
        cout << "Regester \n";
    }
}
int main()
{
    PRintResults(ReadInfo());
    return 0;
}
