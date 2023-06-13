#include <iostream>
#include<fstream>

int main() {
    std::ifstream file{"random.txt"};
    std::ofstream wfile{"write.txt"};

    if (file) {
        std::string text;
        while (getline(file, text)) {
            std::cout << text << std::endl;
        }
        text = "";
        while (file >> text) {
            std::cout << text << ", ";
        }
    }
    else {
        std::cout << "bug";
    }
    file.close();

    if (wfile) {
        wfile << "asd";
    }
    wfile.close();
}
