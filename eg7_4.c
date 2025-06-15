// Write a program to initialize 3 names in an array of strings and display them on to monitor

// Program that initializes 3 names in an array of strings and display them on to monitor.

#include<stdio.h>
int main()
{
    int n;
    char names[3][10] = {"Alex","Plilip","Collins"};
    for(n= 0; n<3;n++)
    printf("%s\n",names[n]);
}