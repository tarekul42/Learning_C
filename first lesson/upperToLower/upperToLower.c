#include <stdio.h>

int main(){
    char upper;
    printf("Enter any uppercase letter: ");
    scanf("%c", &upper);

    // the ASCII code difference between lowercase and uppercase is 32;
    // lowercase letter ar 32 bigger than uppercase letters

    printf("The lowercase letter: %c", upper + 32);
    return 0;
}