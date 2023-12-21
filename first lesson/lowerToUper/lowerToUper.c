#include <stdio.h>

int main(){
    char lower;
    printf("Enter any lowercase letter: ");
    scanf("%c", &lower);

    // the ASCII code difference between lowercase and uppercase is 32;
    // lowercase letter ar 32 bigger than uppercase letters

    printf("The uppercase letter: %c", lower - 32);
    return 0;
}