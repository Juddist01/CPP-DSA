#include <iostream>
using namespace std;

int main() {
    double x = 0; // x needs to be a double to store decimal values from division
    int y = 20;
    
    do {
        y = y - 4;
        // We use 2.0 to force C++ to perform floating-point division
        x = x + (2.0 / y); 
    } while (y >= 6); 
    
    cout << "The final value of x is: " << x << endl;
    return 0;
}
/* SAMPLE OUTPUT:
The final value of x is: 1.04167
*/