#include <iostream>

using namespace std;

int main() {
    cout << R"("<a href="file">C:\"Program Files\"\</a>\n")" << endl;
    cout << R"x(<a href="file">"C:\Program Files (x86)"\</a>\n)x";
}
