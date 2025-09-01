#include <iostream>
#include <cmath> // for sqrt() function
using namespace std;

void printDivisors(int num) {
    if (num <= 0) {
        cout << "Number must be greater than 0." << endl;
        return;
    }
    
    cout << "Divisors of " << num << " are: ";

    // Iterate from 1 to the square root of num
    for (int i = 1; i <= sqrt(num); ++i) {
        if (num % i == 0) { // If i is a divisor
            cout << i << " "; // Print i
            
            if (i != num / i) { // Avoid printing the square root twice if num is a perfect square
                cout << num / i << " "; // Print the corresponding divisor
            }
        }
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    printDivisors(number);

    return 0;
}
