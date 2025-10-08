
#include <iostream>
#include<cstdlib>
using namespace std;

enum enCharType
{
    SamallLetter = 1,    
    CapitalLetter = 2,   
    SpecialCharacter = 3,
    Digit = 4
};
int RandomThreeNumberOf1To10( int Form ,int To  ) {
    int Random;
    Random = rand() % (To - Form + 1) + Form;
    return Random;
}
char PrintGhangeLetter(enCharType CharType){
    switch (CharType) {
    case enCharType::SamallLetter: {
        return char(RandomThreeNumberOf1To10(97, 122));
        break;
    }
    case enCharType::CapitalLetter: {
        return char(RandomThreeNumberOf1To10(65, 90));
        break;
    }
    case enCharType::SpecialCharacter: {
        return char(RandomThreeNumberOf1To10(33, 47));
        break;
    }
    case enCharType::Digit: {
        return char(RandomThreeNumberOf1To10(48, 57));
        break;
    }
                                      return 0;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    cout <<"SamallLetter: " << PrintGhangeLetter(enCharType::SamallLetter) << endl;
    cout <<"CapitalLetter: " << PrintGhangeLetter(enCharType::CapitalLetter) << endl;
    cout <<"SpecialCharacter: " << PrintGhangeLetter(enCharType::SpecialCharacter) << endl;
    cout <<"Digit: " << PrintGhangeLetter(enCharType::Digit) << endl;
    
    return 0;
}

