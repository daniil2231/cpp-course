#include <iostream>
#include <fstream>

int main() {
    std::fstream file;
    file.open("file.txt", std::fstream::app);
    file.write("shed.", 5);
}
