#include <stdio.h>

int main(void) {
    char input[256] = "";
    char *wordNums[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine", "\0"
    };
    
    printf("Please enter a value: ");
    scanf("%s", input);
    
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            // When the character is a number.
            int idx = input[i] - '0';
            printf("%s ", wordNums[idx]);
        } else {
            // When the character is not a number.
            printf("? ");
        }
    }
    
    printf("\n");
    return 0;
}
