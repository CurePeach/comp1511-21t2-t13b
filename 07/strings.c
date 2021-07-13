// Examples of how to use characters and strings
// By T13B

#include <stdio.h>

#define SIZE 100

int main(void) {

    // How do we declare a char?
    char letter;

    // How do we initialise a char?
    // letter = 97;
    letter = 'a';

    // How do we use printf() with a char?
    printf("letter = %c\n", letter);

    // How do we declare a string?
    char string_square[SIZE] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char *string_star;

    // How do we initialise a string?
    string_star = "Hello";

    // How do we use printf() with a string?
    printf("string_square = %s\n", string_square);
    printf("string_star = %s\n", string_star);
    
    printf("sizeof(string_square) = %zu\n", sizeof(string_square));
    printf("sizeof(string_star) = %zu\n", sizeof(string_star));

    return 0;
}