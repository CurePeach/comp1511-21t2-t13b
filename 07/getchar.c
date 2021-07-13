// Exploration of getchar()
// By T13B

#include <stdio.h>

int main(void) {

    // How can we convert this scanf() loop into a getchar() loop?
    // int num;
    // while (scanf("%d", &num) == 1) {
        // printf("%d ", num);
    // }

    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}