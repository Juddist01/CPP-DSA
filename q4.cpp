#include <iostream>
#include <cctype> // Required for isupper() and islower()
using namespace std;

// Function to determine and print the case of the character
void checkCase(char c) {
    if (isupper(c)) {
        cout << "The character '" << c << "' is uppercase." << endl;
    } else if (islower(c)) {
        cout << "The character '" << c << "' is lowercase." << endl;
    } else {
        cout << "The input is not an alphabetical letter." << endl;
    }
}

int main() {
    char userInput;
    cout << "Enter a character: ";
    cin >> userInput;
    
    checkCase(userInput);
    
    return 0;
}
/* SAMPLE OUTPUT:
Enter a character: a
The character 'a' is lowercase.
*/