//EXERCISE DESCRIPTION:
//A simple C++ class represents a URL, such as "http://www.example.com/index.html".

//The class has two members of type std::string.
// One will store the protocol (the "http" part) and the other will store
// the resource (the "www.example.com/index.html" part which comes after the separator).

//Write a constructor for the class which takes the protocol and resource as arguments.

//Write a member function which displays the complete URL, including the separator
// (e.g. "http://www.example.com/index.html")

//Write a free function called test(). This function will create an object of the class,
// then call its member function to display the URL.


#include <iostream>

using namespace std;

class URL {
    string protocol;
    string resource;

public:
    URL(string prot, string res) {
        protocol = prot;
        resource = res;
    }

    void displayURL() {
        cout << protocol << "://" << resource;
    }
};

void test() {
  URL obj = URL("http", "www.example.com/index.html");
  obj.displayURL();
}

int main() {
    test();
}