//ASSIGNMENT:
//You are given the attached languages.txt file and the following type definition:
//
//struct language {
//    string lang;
//    string designer;
//    int date;
//};
//The format of the languages.txt file is:
//
//C Kernighan & Ritchie 1970
//C++ Stroustrup 1979
//Java Gosling 1991
//C# Hejlsberg 1999
//Python van Rossum 1991
//
//Write a program which will:
//Read in the data from the attached languages.txt file
//Use each line of input to populate a language object
//Add this object to a vector
//
//        Print out all the data in the vector, separated by commas
//
//        Your output should look like this:
//
//C, Kernighan & Ritchie, 1970
//C++, Stroustrup, 1979
//Java, Gosling, 1991
//C#, Hejlsberg, 1999
//Python, van Rossum, 1991

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

struct language {
    string lang;
    string designer;
    int date;
};

int main() {
    ifstream file("languages.txt");
    string line;
    vector<language> languages;

    if (file) {
        while (getline(file, line)) {

            istringstream is(line);
            language lang;

            is >> lang.lang;

            string temporary;

            while (!isdigit(temporary[0])) {
                lang.designer += " " + temporary;
                is >> temporary;
            }

            lang.date = stoi(temporary);

            languages.push_back(lang);
        }

        for (const auto& lang : languages) {
            cout << lang.lang << "," << lang.designer << ", " << lang.date << endl;
        }
    }
}
