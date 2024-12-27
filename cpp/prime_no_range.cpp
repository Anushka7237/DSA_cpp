#include <iostream>

int main() {
    int start, end;

    // Input the range
    std::cout << "Enter the start and end of the range: ";
    std::cin >> start >> end;

    std::cout << "Prime numbers in the range " << start << " to " << end << " are:\n";

    for (int num = start; num <= end; num++) {
        if (num <= 1) continue; // Skip numbers less than or equal to 1

        bool isPrime = true;

        // Check if num is prime
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break; // Not a prime number
            }
        }

        if (isPrime) {
            std::cout << num << " ";
        }
    }

    std::cout << std::endl;
    return 0;
}