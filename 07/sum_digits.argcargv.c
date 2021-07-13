
#include <stdio.h>

int main(int argc, char *argv[]) {

    // Instead of using getchar() and stdin, we will look at the command line 
    // arguments
    // Print the number of digits and their sum
    
    int count = 0;
    int sum = 0;
    
    int i = 1;
    while (i < argc) {
        char *word = argv[i];
        
        int j = 0;
        while (word[j] != '\0') {
            if (word[j] >= '0' && word[j] <= '9') {
                count += 1;
                sum += word[j] - '0';
            }
            j++;
        }
        
        i++;
    }
    
    printf("count = %d\n", count);
    printf("sum = %d\n", sum);

    return 0;
}