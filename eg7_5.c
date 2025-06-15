// Write a program to read a string from the keyboard and to display the length of the string on to the monitor by using strlen( ) function.

// Program to illustrate the strlen function to determine the length of a string

#include<stdio.h>
#include<string.h>
 main()
{
    char name[80];
    int length;
    printf("Enter your name: ");
    gets(name);
    length = strlen(name);
    printf("Your name has %d characters \n", length);
}