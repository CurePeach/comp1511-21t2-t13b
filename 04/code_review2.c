// Finding the sum of two numbers and checking which are odd and even
// By T13B

#include <stdio.h>

// Checks if number is even
int is_even(int num);

int main(void) {
    int num1; 
    int num2;  
    int sum;   

    // Getting the numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Adding the two numbers together
    sum = num1 + num2;

    // Tell the user the result
    printf("Your numbers add up to %d\n", sum);

    // Check if its divisible by 2
    // IF the first number is odd
    //      IF the second number is odd
    //      ELSE 
    // ELSE
    //      IF the second number is odd
    //      ELSE
    if (sum % 2 != 0) {
        if (is_even(num1)) {
            printf("The first number you've typed was even and ");
            printf("the second number was odd\n");
        } else {
            printf("The first number you've typed was odd and the second number was even\n");
        }
    } else if (sum % 2 == 0) {
        if (is_even(num1)) {
            printf("Both the numbers you've typed were even\n"); 
        } else {
            printf("Both the numbers you've typed were odd\n");
        }
    }

    return 0;
}

/**
 * Checks if number is even
 *
 * Takes in a number
 * Returns 1 if the number is even and returns 0 if the number is odd
 */
int is_even(int num) {
    return num % 2 == 0;
}
