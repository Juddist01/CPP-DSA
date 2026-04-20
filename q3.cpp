#include <iostream>
using namespace std;

// Function to calculate area
double getArea(double side) {
    return side * side;
}

// Function to calculate perimeter
double getPerimeter(double side) {
    return 4 * side;
}

int main() {
    double sideLength;
    cout << "Enter the side length of the square: ";
    cin >> sideLength;
    
    // Call the functions and display the results
    cout << "Area: " << getArea(sideLength) << endl;
    cout << "Perimeter: " << getPerimeter(sideLength) << endl;
    
    return 0;
}
/* SAMPLE OUTPUT:
Enter the side length of the square: 5
Area: 25
Perimeter: 20
*/