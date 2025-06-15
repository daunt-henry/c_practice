/* Write a program to print ten even natural numbers
Program to print first ten even natural numbers
*/

#include<stdio.h>
int main()
{
    int i = 0;
    int j = 2;
    do {
        printf("%d ", j);
        j = j+2;
        i =i + 1;  
    }
        while (i<10);
}

