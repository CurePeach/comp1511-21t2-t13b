// Make a function that multiplies all the elements in an array by a scalar 
// value
// Patrick Chambers, 29/06/2021

#include <stdio.h>

#define ROW_SIZE 10
#define COL_SIZE 10

void scalar_multiply(int rows, int columns, int matrix[rows][columns], int scalar);

// Swapped the order of the arguments so row_size and column_size can be used for the size of the array
// Used to be:
// void print_array(int array[ROW_SIZE][COL_SIZE], int row_size, int column_size);
void print_array(int row_size, int column_size, int array[row_size][column_size]);

int main(void) {

    int my_array[ROW_SIZE][COL_SIZE];

    // Initialise this array to all 2s
    int row = 0;
    while (row < ROW_SIZE) {
        int col = 0;
        while (col < COL_SIZE) {
            my_array[row][col] = 2;
            col += 1;
        }
        row += 1;
    }

    // Print the initial array
    print_array(ROW_SIZE, COL_SIZE, my_array);
    printf("\n");
    // Multiply all the array elements
    scalar_multiply(ROW_SIZE, COL_SIZE, my_array, 2);
    // Print the multiplied array
    print_array(ROW_SIZE, COL_SIZE, my_array);

    return 0;
}



void scalar_multiply(int rows, int columns, int matrix[rows][columns], int scalar) {

    int row = 0;
    while (row < rows) {
        int col = 0;
        while (col < columns) {
            // Equivalent to: 
            // matrix[row][col] = matrix[row][col] * scalar;
            matrix[row][col] *= scalar;
            col += 1;
        }
        row += 1;
    }
    
    return;
}


void print_array(int row_size, int column_size, int array[row_size][column_size]) {

    int row, column;
    row = 0;
    while (row < row_size) {
        column = 0;
        while (column < column_size) {
            // Added a space after the number in this print function to make it 
            // a bit more pretty
            printf("%d ", array[row][column]);
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return;
}