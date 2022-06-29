/*
# Name: J.P. Pacheaco
# Description: Converts prompted binary to it's decimal.
# Date:
# Specification: Input is exactly 4 characters.
*/

/*
Precondition: the inputted string is 4 characters of 1 or 0
*/
int main ()
{
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>

    //get input from user
    char input[4];
    printf("Enter a four-bit binary number as a string: ");
    scanf("%s", input);

    int total = 0;

    //convert to binary

    for(int i = 0; i < 4; ++i){
        //subtracting 48 from value stored in input to account for ascii code
        total = (total*2) + (input[i] - 48);
    }  

    //return output
    printf("Binary Value: %s", input);
    printf("    Decimal Value: %d\n", total);

    return 0;
}