// A program that implements a function that only pointers can achieve
// By T13B

#include <stdio.h>

// Adds "to_add" to "total"
void add_to(int to_add, int *total);

int main(void) {

    printf("Enter two numbers: ");
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    // There is no difference between this and
    // scanf("%d", &a);
    // scanf("%d", &b);

    int sum = 0;
    add_to(a, &sum);
    printf("The sum is: %d and is at: %p\n", sum, &sum);
    add_to(b, &sum);
    printf("The sum is: %d and is at: %p\n", sum, &sum);

    return 0;
}

/**
 * Adds a number to a cumulative total. We add "to_add" to the "total".
 *
 * Takes in an integer "to_add" and an integer pointer "total".
 * Returns nothing.
 */
void add_to(int to_add, int *total) {
    // total += to_add
    // It changes the address the pointer is holding
    // That doesn't affect the actual variable or the actual pointer
    // It's the same as doing to_add += 1 because that only affects the
    // function copy

    // total = &sum;
    // *total = sum;
    *total += to_add;

    return;
}