#include<stdio.h>

int main(){
    // variable declearation
    int num, num2;
    num = 10;
    num2 = 20;
    printf("The number is %d\n", num); // escape sequence should use in "";
    printf("The number2 is %d\n", num2);

    // print all in a line
    printf("Numbers are %d, %d\n", num , num2);

    /**
     * * write a program that prints a floating,
     * * double number and character
    */

   float num3 = 10.2;
   double num4 = 29.38273048;
   char ch = 'C';

    printf("Number 1 = %f\n", num3);
    // fixed value after floating point
    printf("Number 1 = %.1f\n", num3);
    
    printf("Number 2 = %lf\n", num4);
    printf("Chracter = %c\n", ch);


}