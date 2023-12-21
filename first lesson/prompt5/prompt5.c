// take a intiger and a float number from user and print them;

#include<stdio.h>

int main(){
    int num1;
    float num2;
    printf("Firstly give your intiger number and secondly Float: ");
    scanf("%d %f", &num1, &num2);

    printf("Your numbers are: %d, %f", num1, num2);
    return 0;
}