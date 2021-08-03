// Author: Clarissa Tatang
// Editor: T13B

#include <stdio.h>

// Iterative version
// 1, 1, 2, 3, 5, 8, 13, 21
int fibonacci(int n) {

    int previous = 0;
    int current = 1;
    int i = 1;
    while (i < n) {
        int temp = current;
        current = previous + current;
        previous = temp;
    
        i++;
    }

    return current;
}

// Recursive version
int fibonacci(int n) {
    // BASE CASE(S)
    // Note you can do n == 0 if that makes more sense but
    // n == 2 makes more sense. Just make sure you have two
    // base cases!
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 1;
    }

    // RECURSIVE CASE
    // We want to get the fibonacci number of the one in the 
    // previous slot and the one after that, because that's 
    // the rule of fibonacci
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {

    printf("Enter number: ");
    int num;
    scanf("%d", &num);

    printf("The fibonacci is: %d\n", fibonacci(num));

    return 0;
}