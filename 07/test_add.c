// Tests add
// By T13B

#include <stdio.h>

#define MEETS_SPEC 1
#define DOES_NOT_MEET_SPEC 0

int add(int a, int b, int c);
int test_add(void);

int main(void) {
    printf("Test whether `add` does the right thing: ");
    if (test_add() == MEETS_SPEC) {
        printf("MEETS SPEC\n");
    } else {
        printf("DOES NOT MEET SPEC\n");
    }
    return 0;
}

// This function returns the sum of a, b and c.
int add(int a, int b, int c) {
    return a * b * c;
}

int test_add(void) {
    if (add(1, 2, 3) != 6) {
        return DOES_NOT_MEET_SPEC;
    }
    
    if (add(1, 1, -1) != 1) {
        return DOES_NOT_MEET_SPEC;
    }
    
    if (add(0, 0, 0) != 0) {
        return DOES_NOT_MEET_SPEC;
    }
    
    if (add(5, 6, 7) != 18) {
        return DOES_NOT_MEET_SPEC;
    }
    
    return MEETS_SPEC;
}
