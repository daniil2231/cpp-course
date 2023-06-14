#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    ifstream file("file.txt");

    string line;
    vector<int> numbers;

    while (getline(file, line)) {
        istringstream is(line);
        int num;
        while (is >> num) {
            numbers.push_back(num);
        }
    }

    for (auto n : numbers) {
        cout << n << endl;
    }

    ostringstream ostr;
    string txt;

    cout << "Type a word: ";
    cin >> txt;
    ostr << setw(5) << txt;
    cout << "Type another word: ";
    cin >> txt;
    ostr << setw(10) << txt;

    cout << ostr.str();
}
