/*
# Name: J.P. Pacheaco
# Description: Converts prompted binary to a a decimal
# Date:
# Specification: Input is exactly 4 characters
*/

//this "program" file is the main file

#include <stdio.h>
/*
Precondition: the inputted string is 4 characters of 1 or 0
*/
int main ()
{
    //get input from user
    char input[4];
    printf("Enter a four-bit binary number as a string: ");
    gets(input);

    int total = 0;

    //convert to binary
    int i;
    for(i = 0; i < 4; ++i){
        int var = input[i];
        total = (total*2) + var;
    }

    //return output
    printf("Binary Value: %s", input);
    printf("    Decimal Value: %d", total);

    return 0;

    //QUESTION: HOW DO I STOP DOING MATH ON ASCII AND DO MATH ON CHARS INSTEAD
}