#include <iostream>
#include <cstdlib>
using namespace std;
enum MyEnum
{
    SamallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};

int RandNumberBetween0and10(int Form, int To) {
    int Rondom;
    Rondom = rand() % (To - Form + 1) + Form;
    return Rondom;
}

char PrintResultsLetter(MyEnum CharType) {
    switch(CharType) {
    case MyEnum::SamallLetter: {
        return char(RandNumberBetween0and10(97,122));
    }
    case MyEnum::CapitalLetter: {
        return char(RandNumberBetween0and10(65, 90));
        
    }
    case MyEnum::SpecialCharacter: {
        return char(RandNumberBetween0and10(33, 47));
    }
    case MyEnum::Digit: {
        return char(RandNumberBetween0and10(48, 57));
    }
    default:
                      return 0;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    cout << "SamallLetter " << PrintResultsLetter(MyEnum::SamallLetter) << endl;
    cout << "CapitalLetter " << PrintResultsLetter(MyEnum::CapitalLetter) << endl;
    cout << "SpecialCharacter " << PrintResultsLetter(MyEnum::SpecialCharacter) << endl;
    cout << "Digit " << PrintResultsLetter(MyEnum::Digit) << endl;

    return 0;
}
