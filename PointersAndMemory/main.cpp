//A simple program which creates a pointer:

#include <iostream>

using namespace std;

int main() {
    int x = 1;
    int* p = &x;
    cout << "address of x = " << &x << endl;
    cout << "value of p = " << p << endl;
    cout << "value of stack variable after dereferencing p = " << *p << endl;

    int* pa = new int[5];
    for (int i = 0; i < 5; i++) {
        pa[i] = i;
    }

    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << pa[i] << ", ";
    }
}
