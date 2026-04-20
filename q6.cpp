#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    double sum = 0;
    
    // Loop to input 5 values
    for (int i = 0; i < 5; i++) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> numbers[i];
        sum += numbers[i]; // Add the input directly to the sum
    }
    
    // Calculate and display the average
    double average = sum / 5.0;
    cout << "The average of the entered values is: " << average << endl;
    
    return 0;
}
/* SAMPLE OUTPUT:
Enter value 1: 12
Enter value 2: 24
Enter value 3: 36
Enter value 4: 48
Enter value 5: 60
The average of the entered values is: 36
*/