#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber(string Message) {
    float N;
    cout << Message << endl;
    cin >> N;
    return N;
}

float GetFractionPart(float Number) {
    return Number - int(Number);
}

int MyRound(float Number) {
    int Part = (int)Number;
    float FractionPart = GetFractionPart(Number);

    if (fabs(FractionPart) >= 0.1) {
        if (Number > 0)
            return Part - FractionPart;
        else
            return Part -1;
    }

    return Part;
}

int main() {
    float N = ReadNumber("Please enter a number to round:");
    cout << "\nMy Floor: " << MyRound(N);
    cout << "\nC++ Round: " << floor(N) << endl;
    return 0;
}

