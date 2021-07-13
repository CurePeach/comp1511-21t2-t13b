
#include <stdio.h>

int main(void) {

    // Use getchar{} to read characters from stdin until end of input
    // Print the number of digits and their sum
    int sum = 0;
    int count = 0;
    
    int c;
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            count += 1;
            sum += c - '0';
        }
    }
    
    printf("count = %d\n", count);
    printf("sum = %d\n", sum);

    return 0;
}