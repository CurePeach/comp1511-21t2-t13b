// Write a program that reads in an integer and prints out that many asterisks, each on a new line
// Patrick Chambers, 15/06/21

#include <stdio.h>

int main (void) {


    int size;
    printf("Please enter an integer: ");
    scanf("%d", &size);

    int i = 0;
    while (i < size) {
        printf("*\n");
        i++;
    }

    return 0;
}