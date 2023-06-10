#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec{4, 2, 3, 4, 1};
    cout << vec[0] << endl;
    cout << vec[3] << endl;
    vec[2] = 6;

    for (int i : vec) {
        cout << i << " ";
    }

    cout << endl;

    string str = "Hello";
    cout << str[0] << endl;
    cout << str[4] << endl;
    str[3] = 'b';

    for (char c : str) {
        cout << c << " ";
    }
}
