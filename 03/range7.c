// Reads an integer n and then prints the integers 1..n, one per line
// Which are divisible by 7
// By T13B
// 15th June 2021

#include <stdio.h>

int main(void) {

    printf("Enter finish: ");
    int n;
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        if (i % 7 == 0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}