#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 5

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2)
        return 0; // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int main() {
    srand(time(NULL));

    int array[ARRAY_SIZE];
    int sum = 0;

    // Generate random numbers and populate the array
    printf("Generated array:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        array[i] = rand() % 100;
        printf("array[%2d] = %2d\n", i, array[i]);
    }

    // Calculate the sum of prime numbers in the array
    printf("\nPrime numbers found in the array:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (isPrime(array[i])) {
            sum += array[i];
            printf("(array[%d] = %d) => Sum: %d\n", i, array[i], sum);
        }
    }

    // Print the sum of all prime numbers in the array
    printf("\nSum of all prime numbers in the array: %d\n", sum);

    return 0;
}
