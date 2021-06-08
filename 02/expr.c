// A sample program that prints the result of expressions
// By T13B

#include <stdio.h>

int main(void) {
    int result = (12 - 17) % 6;
    printf("(12 - 17) %% 6 = ");
    printf("%d\n", result);
    
    result = (12 - 17) % 6 - 4;   
    printf("(12 - 17) %% 6 - 4 = ");
    printf("%d\n", result);


    return 0;
}