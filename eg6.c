/* Write a program to calculate the factorial of a given input natural number. 

Program to calculate factorial of a given number
*/

#include<stdio.h>
#include<math.h>
#include<stdio.h>

int main()
{
    int x;
    long int fact = 1;
    printf("Enter any number to find factorial:\n");
    scanf("%d",&x);
    while(x>0)
        {
            fact = fact * x;
            x= x-1;
        }
    printf("Factorial is %d",fact);
}
