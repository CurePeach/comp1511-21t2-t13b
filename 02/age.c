// A program that checks an age and prints something depending on the it
// By T13B on 7th June 2021

#include <stdio.h>

#define LEGAL_AGE 18

int main(void) {
    // This is asking for the user's input
    printf("Enter your age: ");
    
    // This is obtaining the user's input
    // To use scanf(), we need to create the variable and 
    // we need the & in front of the name of the variable
    int age;
    scanf("%d", &age);
    
    // This is a printf() that's just checking what the value of age is
    // What the 02 does is that it pads with 0s and 
    // ensures every number is a minimum of two digits.
    // If we had %03d, it pads with 0s and ensures every number is a 
    // minimum of three digits.
    printf("age = %02d\n", age);
    
    if (age >= LEGAL_AGE) {
        printf("Okay you're in\n");
    } else {
        printf("It's past your bedtime\n");
    }

    return 0;
}
