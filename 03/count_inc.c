// Reads an integer n and then prints the integers between 1..n, 
// One per line using an increment of the user's choosing
// By T13B
// 15th June 2021

#include <stdio.h>

int main(void) {

    printf("Enter finish: ");
    int finish;
    scanf("%d", &finish);
    
    printf("Enter increment: ");
    int inc;
    scanf("%d", &inc);

    int i = 1;
    while (i <= finish) {
        printf("%d\n", i);
        i += inc;
    }

    return 0;
}