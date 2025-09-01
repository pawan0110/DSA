#include <iostream>
#include <cmath> // for pow() function
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num; // Save the original number
    int sum = 0;
    int numDigits = 0;
    int temp = num; // Temporary variable to count digits

    // Calculate number of digits
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }

    // Restore temp to original number
    temp = originalNum;

    // Calculate sum of digits raised to the power of numDigits
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }

    // Check if the sum is equal to the original number
    return sum == originalNum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
