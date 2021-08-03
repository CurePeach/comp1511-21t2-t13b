// Author: Dean Wunder (d.wunder@unsw.edu.au)
// Editor: T13B
// Using a stack to match brackets

#include <stdio.h>
#include "stack.h"

int opening_bracket(int bracket);
int closing_bracket(int bracket);
int brackets_match(int opening, int closing);

int main(int argc, char *argv[]) {

    Stack stack = create_stack();
    int correct_brackets = 1;
    char *brackets = argv[1];
    int i = 0;
    while (brackets[i] != '\0' && correct_brackets == 1) {
        if (opening_bracket(brackets[i])) {
            stack_push(stack, brackets[i]);        
        } else if (closing_bracket(brackets[i])) {
            int newest_bracket = stack_pop(stack);
            if (brackets_match(newest_bracket, brackets[i])) {
                correct_brackets = 1;
            } else {
                correct_brackets = 0;
                // stack_push(stack, newest_bracket);
            }
        }
    
        i++;
    }
    
    if (stack_size(stack) != 0) {
        correct_brackets = 0;
    }
    
    free_stack(stack);
    
    if (correct_brackets == 1) {
        printf("All brackets match!\n");
    } else {
        printf("Invalid bracket sequence.\n");
    }
    
    return 0;
}

int opening_bracket(int bracket) {
    if (bracket == '(' || bracket == '{' || bracket == '[') {
        return 1;
    }
    return 0;
}

int closing_bracket(int bracket) {
    if (bracket == ')' || bracket == '}' || bracket == ']') {
        return 1;
    }
    return 0;
}

int brackets_match(int opening, int closing) {
    if (opening == '(' && closing == ')') {
        return 1;
    }
    if (opening == '{' && closing == '}') {
        return 1;
    }
    if (opening == '[' && closing == ']') {
        return 1;
    }
    return 0;
}