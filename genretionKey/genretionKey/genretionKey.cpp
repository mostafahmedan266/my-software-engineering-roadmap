

#include <iostream>
#include <cstdlib>
using namespace std;
int ReadNUmber(string Message) {
    int N;
    cout << Message << endl;
    do
    {
        cin >> N;
    } while (N <= 0); return N;
}
int Random(int From, int To) {
    int Prondom;
    Prondom = rand() % (To - From + 1) + From;
    return Prondom;
}
void PrintNumberKey(int key) {
    
    
    for (int i = 1; i <= key; i++){
        string text1 = "";
        string text2 = "";
        string text3 = "";
        string text4 = "";
        for (int i = 1; i <= 4; i++)
        {

            text1 += char(Random(65, 90));
            text2 += char(Random(65, 90));
            text3 += char(Random(65, 90));
            text4 += char(Random(65, 90));

        }
        cout << "Key["<<i<<"] :  " << text1 << "-" << text2 << "-" << text3 << "-" << text4 << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int N = ReadNUmber("please Enter Key");
    PrintNumberKey(N);
    

    return 0;
    
}

