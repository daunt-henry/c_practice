// Write a program to print whether the given number is even or odd.

/*Program to print whether the given number is even or odd*/
#include<stdio.h>
int main()
{
    int x ;
    printf("Enter a number:\n");
    scanf("%d", &x);
    if(x%2 == 0)
        printf("\n Given number is even \n");
    else
        printf("\n Given number is odd \n");
}