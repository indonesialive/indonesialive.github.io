#include <stdio.h>

int main()
{
    // Write a program that prints out the numeric values of characters Z and z.
    char myChar1 = 'z', myChar2 = 'Z';

    printf("%d, %d\n", myChar1, myChar2);
    // Given two numeric values, 72 and 104, write a program to print out the corresponding two characters.
    int num1 = 72, num2 = 104;
    printf("%c, %c\n", num1, num2);
    // For a 16-bit integer variable, can you assign the variable with an integer value of 32768?
    int num3 = 32768;
    printf("%d\n", num3);
    // Given the declaration double dbl_num = 123.456;, write a program that prints out the value of dbl_num in both floating-point and scientific notation formats.
    double dbl_num = 123.456;
    printf("%f, %e", dbl_num, dbl_num);
    // Write a program that can print out the numeric value of the newline character (\n). (Hint: assign `\n' to a character variable.)
    char newline = '\n';
    printf("%d\n", newline);
    return 0;
}