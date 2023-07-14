#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL)); // Initialize random seed

    int n; // Declare the variable before any code

    n = rand() % RAND_MAX - RAND_MAX / 2; // Generate a random number

    printf("The number %d is ", n);

    if (n > 0) {
        printf("positive\n");
    } else if (n == 0) {
        printf("zero\n");
    } else {
        printf("negative\n");
    }

    return 0;
}
