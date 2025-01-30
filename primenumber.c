#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 1) {
        int i;
        for (i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                break;
            }
        }
        if (i > number / 2) {
            printf("%d is a prime number\n", number);
        } else {
            printf("%d is not a prime number\n", number);
        }
    }

    return 0;
}
