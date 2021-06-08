// A program that checks an age and prints something depending on the it
// By T13B on 7th June 2021

#include <stdio.h>

#define LEGAL_AGE 18

int main(void) {
    printf("Enter your age: ");
    int age;
    scanf("%d", &age);
    printf("Age :: %02d\n", age);
    
    if (age >= LEGAL_AGE) {
        printf("Okay you're in\n");
    } else {
        printf("It's past your bedtime\n");
    }

    return 0;
}