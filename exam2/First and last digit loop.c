#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, sum;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number; 
    }

    lastDigit = number % 10; 

    while (number >= 10) {
        number /= 10; 
    }
    
    firstDigit = number;
    
    sum = firstDigit + lastDigit;

    printf("The sum of the first digit (%d) and last digit (%d) is: %d\n", firstDigit, lastDigit, sum);

    return 0;
}
