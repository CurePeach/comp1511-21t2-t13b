// Print out a 7x7 square of 1s using a 2D array
// Patrick Chambers, 29/06/2021

#include <stdio.h>

#define SIZE 7

// Swapped the order of the arguments so row_size and column_size can be used for the size of the array
// This makes it more reusable, as we don't have to rely on the constant SIZE defined in one file
// Used to be:
// void print_array(int array[SIZE][SIZE], int row_size, int column_size);
void print_array(int row_size, int column_size, int array[row_size][column_size]);

int main(void) {

    int my_array[SIZE][SIZE];

    // Initialise our array
    int row, column;
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            my_array[row][column] = 1;
            column = column + 1;
        }
        row = row + 1;
    }

    print_array(SIZE, SIZE, my_array);

    return 0;
}

void print_array(int row_size, int column_size, int array[row_size][column_size]) {

    int row, column;
    row = 0;
    while (row < row_size) {
        column = 0;
        while (column < column_size) {
            printf("%d", array[row][column]);
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return;
}
