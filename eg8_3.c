// Program to calculate the square of a given integer using the function prototype
#include<stdio.h>
main()
{
    int n, sq;
    int square(int);            // function prototype
    printf("Enter a number to calculate square value");
    scanf("%d", &n);
    sq = square(n);
    printf("\nSquare of the number is: %d", sq);
}

// square function
int square (int no)  // passing of argument
{
    int result;         // local variable to function square
    result = no*no;
    return(result);     // returns an integer value
}