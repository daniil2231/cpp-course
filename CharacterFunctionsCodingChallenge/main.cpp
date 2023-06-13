//CHALLENGE:
//Write a function called exclaim() which is defined in the exercise namespace.
//This function will take an std::string as argument and return an std::string.
//The function will return the argument string, but with all the punctuation characters replaced by an exclamation mark.
//For example, given the string
//"To be, or not to be, that is the question:"
//exclaim() will return the string
//"To be! or not to be! that is the question!"
//Use a character function to implement this function.

#include <iostream>

std::string exclaim(std::string str) {
    for (char& i : str) {
        if(ispunct(i)) {
            i = '!';
        }
    }
    return str;
}

int main() {
    std::cout << exclaim("Test.");
}
