#include <iostream>
using namespace std;

int MySum(int a, int b) {
    int s = 0;
    s = a + b;
    return s;
}

int main() {
    int arr1[5] = { 200, 100, 50, 25, 30 };
    int a, b, c;

    a = 10;
    b = 20;

    a++;   // post-increment → يزيد 1 بعد الاستخدام
    ++b;   // pre-increment → يزيد 1 قبل الاستخدام

    c = a + b;

    cout << a << endl;   // يطبع 11
    cout << b << endl;   // يطبع 21
    cout << c << endl;   // يطبع 32

    for (int i = 1; i <= 5; i++) {
        cout << i << endl;
        a = a + a * i;   // تحديث قيمة a
    }

    c = MySum(a, b);   // يستدعي الدالة MySum
    cout << c << endl;

    return 0;
}
