// A program that scans in numbers and prints them back.
// Currently prints the number straight away.
// How do we write it that it prints all the numbers at the end?
// By T13B

#include <stdio.h>

int main(void) {
    int num;
    int result = scanf("%d", &num);
    while (result == 1) {
        printf("%d\n", num);
        result = scanf("%d", &num);
    }
    
    /*
    ALTERNATIVE WHILE LOOP STRUCTURE
    while (scanf("%d", &num) == 1) {
    }
    */

    return 0;
}
