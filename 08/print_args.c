// Using argc, argv to print out strings
// T13B

#include <stdio.h>

int main(int argc, char *argv[]) {

    int i = 0;
    while (i < argc) {
        char *curr_string = argv[i];
        printf("%s\n", curr_string);
        i += 1;
    }

    return 0;
}