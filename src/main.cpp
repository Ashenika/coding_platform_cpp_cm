#include "AddStrings.h"
#include <iostream>
#include <string>

int main() {
     // Access attributes and set values
    string textone = "Hello";
    string texttwo = "World";

    cout << AddStrings::concatString(textone, texttwo);
    return 0;
}
