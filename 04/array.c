// A C program that provides an assortment of array functions
// By T13B

#include <stdio.h>

#define SIZE 7

// Prints an array
void print_array(int array[], int length);
// Initialise array to all number passed in
void initialise_array(int array[], int num);
// Changes the element of the array at the index to 42
void change_array_element(int array[], int index);


int main(void) {

    // Create an array and initialise it to zeroes
    int array1[SIZE] = {0};
    print_array(array1, SIZE);
    print_array(array1, 2);

    // Create an array and initialise it to ones
    // METHOD 1
    int array2[SIZE] = {1, 1, 1, 1, 1};
    print_array(array2, SIZE);
    // METHOD 2
    int array3[SIZE] = {0};
    initialise_array(array3, 1);
    print_array(array3, SIZE);
    
    change_array_element(array3, 1);
    print_array(array3, SIZE);

    return 0;
}

/**
 * This function changes an array element of the array arr at the index passed 
 * in to 42.
 * 
 * It takes in an int array arr and an int index.
 * Returns nothing.
 */
void change_array_element(int array[], int index) {
    array[index] = 42;
}

/**
 * Prints an array 
 *
 * Takes in the array to print
 * Returns nothing
 */
void print_array(int array[], int length) {
    int i = 0;
    while (i < length) {
        printf("%d ", array[i]);
        i += 1;
    }
    printf("\n");

    return;
}

/**
 * Initialises an array to a certain number
 *
 * Takes in the array to initialise and the number
 * Returns nothing
 */
void initialise_array(int array[], int num) {
    int i = 0;
    while (i < SIZE) {
        array[i] = num;
        i += 1;
    }

    return;
}
