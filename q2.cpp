#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double radius, volume;
    // We define PI manually to avoid compiler errors
    const double PI = 3.14159265358979323846;
    
    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    
    // Formula: (4/3) * pi * r^3
    volume = (4.0 / 3.0) * PI * pow(radius, 3);
    
    cout << "The volume of the sphere is: " << volume << endl;
    return 0;
}
/* SAMPLE OUTPUT:
Enter the radius of the sphere: 7
The volume of the sphere is: 1436.76
*/