#include <iostream>

using pfunc = void (*)();

void func() {
    std::cout << "hi";
}

pfunc otherFunc() {
    std::cout << &func;
    return func;
}

pfunc anotherFunc(pfunc pf) {
    return pf;
}

int main() {
    anotherFunc(otherFunc());
}
