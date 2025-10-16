
#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
enum enChoice
{
    Stone = 1,
    Paper = 2,
    Scissors=3,
};
int ReadNumber(string Message) {
    int N;
    cout << Message;
    do
    {
        cin >> N;
    } while (N<=0);
    return N;
}

void SetColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}


void FinalWinner(int A, int B) {
    if (A > B) {
        cout << "user";
        SetColor(10);

    }
    else if (A < B) {
        cout << "computer";
        SetColor(12);

    }
    else
    {
        cout << "Eqle";
        SetColor(14);
    }
}
int Rondom(int From, int To) {
    return (rand() % (To - From + 1) + From);
}

enChoice check(int a) {
    switch (a) {
    case 1:
        return enChoice::Stone;
    case 2:
        return enChoice::Paper;
    case 3:
        return enChoice::Scissors;
    default:
        return enChoice::Stone;
    }
}

void PrintType(int Type) {
    if (Type == 1)
        cout << "Stone";
    else if (Type ==2)
        cout << "Paper";
    else
    {
        cout <<  "Scissors";
    }
}

void Begines(int length) {
    int choice;
    int user , Laptop;
    int countUser = 0;
    int countlaptop = 0;
    int counteqle = 0;
   
    for (int i = 1; i <= length; i++)
    {
        cout << "Round [" << i << "] begins" << endl;
        cout << "Your Choice: [1]:Stone, [2]:Paper, [3]:Scissors ?" << endl;
        cin >> choice;
        user = choice;
        Laptop = Rondom(1,3);
        
        
         if (
            user == 1 && Laptop == 3 ||
            user == 2 && Laptop == 1 ||
            user == 3 && Laptop ==2 ) {
            SetColor(12);
            cout << "__________Round[" << i << "]__________" << endl;
            cout << "player choice :"; PrintType(user);
            cout << "\ncomputer choice :"; PrintType(Laptop);
            cout << "\nRound Winner  : [coputer]" << endl;
            cout << "______________________________________" << endl;
            countlaptop++;

        }
        else if (
            user == 3 && Laptop == 1 ||
            user == 1 && Laptop == 2 ||
            user == 2 && Laptop == 3) {
             SetColor(10);
            cout << "__________Round[" << i << "]__________" << endl;
            cout << "player choice :"; PrintType(user);
            cout << "\ncomputer choice :"; PrintType(Laptop);
            cout << "\nRound Winner  : [user]" << endl;
            cout << "______________________________________" << endl;
            countUser++;

        }
        else {
             SetColor(14);
             counteqle++;
             cout << "__________Round[" << i << "]__________" << endl;
             cout << "player choice :"; PrintType(user);
             cout << "\ncomputer choice :"; PrintType(Laptop);
             cout << "\nRound Winner  : [No Wineer]" << endl;
             cout << "______________________________________" << endl;
         }
    }



    cout << "=========================================\n";
    cout << "         +++ G a m e   O v e r +++       \n";
    cout << "=========================================\n\n";

    cout << "           [Game Results ]               \n";
    cout << "_________________________________________\n";

    cout << "Game Rounds        : "<< length << endl;
    cout << "Player1 won times  : " << countUser << endl;
    cout << "Computer won times : " << countlaptop << endl;
    cout << "Draw times         : " << counteqle << endl;
    cout << "Final Winner       : "; FinalWinner(countUser, countlaptop); cout << endl;

    cout << "_________________________________________\n";



}
int main()
{
   
    srand((unsigned)time(NULL));

    char N;
    do
    {
        int length = ReadNumber("how many round 1 of 10 ?");
        Begines(length);
        cout << "Do you Want To Play Again ? Y/N ?";
        cin >> N;

    } while (N == 'y' || N == 'Y');
    
}

