#include <stdio.h>

#define SIZE 1024

int main(void) {

    // How do we scan in one line?
    char s[SIZE];
    // fgets(s, SIZE, stdin);
    // printf("%s", s);

    // How do we scan until the user stops us?
    while ((fgets(s, SIZE, stdin)) != NULL) {
        printf("%s", s);
    }

    return 0;
}
