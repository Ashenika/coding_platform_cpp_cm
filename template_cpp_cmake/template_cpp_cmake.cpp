// template_cpp_cmake.cpp : Defines the entry point for the application.
//

#include "template_cpp_cmake.h"
#include <iostream>
#include <string>

using namespace std;

class AddStrings {
public:
    string concatString(string text1, string text2) {
        // Appending the string.
        string output = text1 + text2;
        return output;
    }
};

int main() {
    AddStrings myObj;  // Create an object of MyClass

    // Access attributes and set values
    string textone = "Hello";
    string texttwo = "World";

    // Print values
    cout << myObj.concatString(textone, texttwo);
    return 0;
}