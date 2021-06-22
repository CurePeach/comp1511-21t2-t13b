// determines if you are in high school or not
// By unknown author - Reviewed by T13B

#include <stdio.h>

#define MIN_YEAR 7
#define MAX_YEAR 12

int main(void) {
    int input_year;
    printf("What year are you in? ");
    scanf("%d", &input_year);
    if (input_year >= MIN_YEAR && input_year <= MAX_YEAR){
        printf("You are in high school\n");
    } else {
        printf("You are not in high school\n");
    }
    return 0;
}
