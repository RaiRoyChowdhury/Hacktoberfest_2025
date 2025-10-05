#include <iostream>
#include <cmath> // Required for sqrt()

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    // Handle special cases for prime numbers
    if (num <= 1) {
        std::cout << num << " is not a prime number." << std::endl;
        return 0;
    }
    if (num == 2) {
        std::cout << num << " is a prime number." << std::endl;
        return 0;
    }
    // All even numbers greater than 2 are not prime
    if (num % 2 == 0) {
        std::cout << num << " is not a prime number." << std::endl;
        return 0;
    }

    bool isPrime = true;
    // Check for divisibility by odd numbers from 3 up to the square root of num
    for (int i = 3; i * i <= num; i += 2) { 
        if (num % i == 0) {
            isPrime = false;
            break; // No need to check further if a divisor is found
        }
    }

    if (isPrime) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}
