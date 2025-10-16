#include <iostream>
using namespace std;

void FillArray(int arr[100], int& length) {
    length = 6;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}

void PrintArray(int arr[100], int length) {
    for (int i = 0; i < length; i++)
        cout << arr[i] << "  ";
    cout << endl;
}

bool IsPalindrome(int arr[100], int length) {
    for (int i = 0; i < length/2 ; i++) {
        if (arr[i] != arr[length - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[100], arr2[100];
    int length = 0, length2 = 0;

    FillArray(arr, length);

    cout << "\nArray 1 Elements: ";
    PrintArray(arr, length);

    if (IsPalindrome(arr, length))
        cout << "Array is Palindrome " << endl;
    else
        cout << "Array is NOT Palindrome " << endl;

    return 0;
}
