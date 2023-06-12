#include <iostream>

using namespace std;

template <typename T>
T Max(const T& t1, const T& t2) {
    if(t1 > t2) {
        return t1;
    }
    return t2;
}

template <typename T>
class Test {
        T data;
public:
    Test(const T& data) : data(data) {}
};

int main() {
    Test<int> num = 1;
    cout << Max(2.5, 2.8);
}
