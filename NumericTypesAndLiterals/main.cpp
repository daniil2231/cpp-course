#include <iostream>

using namespace std;

int main() {
    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "long long: " << sizeof(long long) << endl;

    cout << "fixed-width char16: " << sizeof(char16_t) << endl;
    cout << "fixed-width char32: " << sizeof(char32_t) << endl;
    cout << "fixed-width int8: " << sizeof(int8_t) << endl;
    cout << "fixed-width int16: " << sizeof(int16_t) << endl;
    cout << "fixed-width int32: " << sizeof(int32_t) << endl;
    cout << "fixed-width int64: " << sizeof(int64_t) << endl;

    int decimal = 42;
    int hexadecimal = 0x2b;
    int octal = 072;
    int binary = 0b101010;
    cout << "decimal: " << decimal << endl;
    cout << "hexadecimal: " << hexadecimal << endl;
    cout << "octal: " << octal << endl;
    cout << "binary: " << binary << endl;

    int milli = 1'000'000;
    cout << "million: " << milli;
}
