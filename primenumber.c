#include <stdio.h> // Include standard input/output library for functions like printf and scanf

int main() {
    int number; // Declare an integer variable 'number' to store the input number.

    printf("Enter a number: "); // Prompt the user to enter a number.
    scanf("%d", &number); // Read the integer from the user and store it in 'number'. %d is the format specifier for integers.

    // Prime numbers are greater than 1. Handle cases where the number is less than or equal to 1.
    if (number > 1) {
        int i; // Declare a loop counter variable 'i'.

        // Check for divisibility from 2 up to half of the number.  We only need to check up to half because if a number has a divisor larger than half of itself, the other factor must be smaller than half of itself.
        for (i = 2; i <= number / 2; i++) {
            if (number % i == 0) { // If the number is divisible by 'i', it's not prime.
                break; // Exit the loop because we've found a divisor.
            }
        }

        // After the loop, check the value of 'i'.
        // If 'i' is greater than number / 2, it means no divisor was found, and the number is prime.
        if (i > number / 2) {
            printf("%d is a prime number\n", number);
        } else {
            printf("%d is not a prime number\n", number);
        }
    } else {
        printf("%d is not a prime number\n", number); // 1 and numbers less than 1 are not prime.
    }

    return 0; // Return 0 to indicate successful program execution.
}
