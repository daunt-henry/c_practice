// Write a program to read a string from the keyboard and copy the string onto the second string and display the strings on to the  monitor by using strepy() function.

// Program to illustrate strepy function

#include<stdio.h>
#include<string.h>
int main()
{
    char first[80], second[80];
    printf("Enter a string: ");
    gets(first);
    strcpy(second, first);
    printf("\n First string is: %s, and second string is: %s\n", first, second);
}