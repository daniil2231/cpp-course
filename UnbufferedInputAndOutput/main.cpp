#include <iostream>
#include <fstream>

int main() {
//    char c;
//    while (std::cin.get(c)) {
//        std::cout.put(c);
//    }
    const int buffersize = 10;
    char buffer[buffersize];
    std::string file = "input.txt";

    std::ifstream ifile(file);

    if (ifile) {
        ifile.read(buffer, buffersize);
        ifile.close();

        std::cout.write(buffer, buffersize);
    }
    else {
        std::cout << "bug";
    }
}