// take float number from user and print it.

#include<stdio.h>
int main(){
    float num1, num2;
    printf("Enter your floating numbers: ");
    scanf("%f %f", &num1, &num2 );

    printf("Your floating numbers are: %.1f, %.1f", num1, num2);
    return 0;
}