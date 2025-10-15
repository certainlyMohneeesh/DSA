#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
unsigned long long factorial(int n) {
    if (n <= 1) return 1; // Base case: factorial of 0 or 1 is 1
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << n << " is " << factorial(n) << endl;
    }

    return 0;
}
// This program calculates the factorial of a non-negative integer using recursion.
// It prompts the user for input and handles negative numbers gracefully.
// The factorial function is defined recursively, with a base case for 0 and 1.
// The program uses unsigned long long to handle larger factorials, but be aware of overflow for large n.
// The code is written in C++ and uses the standard input/output libraries.
// The program is designed to be simple and educational, demonstrating the concept of recursion in C++.
// Note: For very large values of n, the factorial can exceed the limits of unsigned long long.
// Consider using libraries or data types that can handle larger integers if needed.