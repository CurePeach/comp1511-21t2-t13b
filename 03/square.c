// Write a program that reads in an integer and prints a square of that size
// Patrick Chambers, 15/06/21

#include <stdio.h>

int main (void) {

    int size;
    printf("Please enter an integer: ");
    scanf("%d", &size);

    int row = 0;
    while (row < size) {
        
        int col = 0;
        while (col < size) {
            printf("*");
            col++;
        }
        printf("\n");
        row++;
    }

    return 0;
}