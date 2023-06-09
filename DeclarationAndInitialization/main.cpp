#include <iostream>
#include <vector>

using namespace std;
using vec = vector<int>;

int main() {
    //universal initialization of built-in types with single and multiple initial values
    int a{1};
    cout << a << endl;
    vector<int> v{1, 2, 3};
    cout << v[1] << endl;

    //type alias using Modern C++
    vector<vec> vecOfVec;
}
