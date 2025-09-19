

#include <iostream>
#include <cstdlib>

using namespace std;

int ReadNumber(string Message) {
    int N;
    cout << Message << endl;
    do
    {
        cin >> N;
    } while (N<=0);
    return N;
}
int Rondom(int From, int To) {
    return (rand() % (To - From + 1) + From);
}

void CreateArray(int arr[100] ,int &lengtharr) {
    lengtharr = ReadNumber("plese enter number ?");
    for (int i = 0; i < lengtharr; i++)
    {
        arr[i] = Rondom(1, 9) * 10;
    }
}
void PrintArray(int arr[100], int lengtharr) {
   
    for (int i = 0; i < lengtharr; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void AddArray(int N, int arr2[100], int& length2) {
    arr2[length2] = N;
    length2++;
}


bool IsNuberInArray(int N, int arr[100], int length) {
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == N)
            return true;
    }
    return false;
}
void CopyDistinetNumberToArray(int arr[100],int arr2[100] , int length , int &length2) {
    for (int i = 0; i < length; i++)
    {
        if (!IsNuberInArray(arr[i], arr2, length2)) {
            AddArray(arr[i], arr2, length2);
        }
    }
}


int main()
{
    int arr[100];
    int lengtharr;
    srand((unsigned)time(NULL));

    CreateArray(arr, lengtharr); 
    cout << "Array 1: ";
    PrintArray(arr, lengtharr);

    int arr2[100];
    int lengtharr2=0;

    CopyDistinetNumberToArray(arr, arr2, lengtharr, lengtharr2);
    cout << "\nArray 2 (distinct): ";
    PrintArray(arr2, lengtharr2);

    return 0;
}

