// A sample piece of code which uses double pointers to demonstrate
// the nature of pointers.

#include <stdio.h>

// Change the number passed in to 6.67
void change_num(double *num);

int main(void) {

    printf("Before change in the main function:\n");
    double num = 0.0;
    printf("num = %lf and is at %p\n", num, &num);

    change_num(&num);

    printf("After change in the main function:\n");
    printf("num = %lf and is at %p\n", num, &num);

    return 0;
}

/**
 * Changes the number passed in to 6.67
 *
 * Takes in a double "num"
 * Returns nothing
 *
 * Note this is a horrible function because there are printf()'s in
 * it that are irrelevant to the purpose of the function. A function 
 * should only have one responsibility and one purpose. For this to be
 * a good function, it should ONLY do what it is set out to do: change
 * the number.
 */
void change_num(double *num) {
    printf("Before change in the helper function:\n");
    printf("num = %lf and is at %p\n", *num, num);

    *num = 6.67;

    printf("After change in the helper function:\n");
    printf("num = %lf and is at %p\n", *num, num);
}