// Write a program to convert the string into lower case characters using in-built function.

// Program that converts input string to lower case characters

#include<stdio.h>
#include<string.h>

int main()
{
    char first [80];
    printf("Enter a string: ");
    gets(first);
    printf("Lower case of the string is %s", strlwr(first));
}