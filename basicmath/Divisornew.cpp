#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to calculate the sum of all divisors of a number
int sumOfDivisors(int num) {
    int sum = 0;
    // Iterate from 1 to sqrt(num)
    for (int i = 1; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            // i is a divisor
            sum += i;
            // Check if num / i is different from i
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum;
}

// Function to calculate the sum of F(i) from 1 to N
int sumF(int N) {
    int totalSum = 0;
    // Iterate from 1 to N
    for (int i = 1; i <= N; ++i) {
        totalSum += sumOfDivisors(i);
    }
    return totalSum;
}

int main()
{
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;
     
     return 0;
     sumOfDivisors(N);
    int ans =  sumF( N);
    cout<<ans;
    
}