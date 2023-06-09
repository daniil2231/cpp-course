#include <iostream>

using namespace std;

int PassByValue(int y) {
    cout << "y is " << y << endl;
    y = 1;
    return y;
}

int PassByAddress(int& y) {
    cout << "y is " << y << endl;
    y = 1;
    return y;
}

int* PassByReference(int* y) {
    cout << "y is " << y << endl;
    *y = 1;
    return y;
}

int main() {
    int x = 2;
    cout << "x = " << x << endl;
    cout << "address of x = " << &x << endl;
    //PassByValue
//    cout << "PassByValue(x) = " << PassByValue(x) << endl;
//    cout << "x after PassByValue(x) = " << x << endl;

    //PassByAddress
//    cout << "PassByAddress(x) = " << PassByAddress(x) << endl;
//    cout << "x after PassByAddress(x) = " << x << endl;

    //PassByReference
    cout << "PassByValue(x) = " << PassByReference(&x) << endl;
    cout << "x after PassByValue(x) = " << x << endl;
}
