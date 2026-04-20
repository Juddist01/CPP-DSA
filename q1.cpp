#include <iostream>
using namespace std;

int main() {35
    int days;
    // User input
    cout << "Enter the number of days: ";
    cin >> days;
    
    // Calculate seconds (days * 24 hours * 60 minutes * 60 seconds)
    long long seconds = days * 24 * 60 * 60; 
    
    cout << "There are " << seconds << " seconds in " << days << " days." << endl;
    return 0;
}
/* SAMPLE OUTPUT:
Enter the number of days: 35
There are 3024000 seconds in 35 days.
*/