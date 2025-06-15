// Write a program to multiply the two given numbers

#include<stdio.h>
int main()
{
    int x,y,z;
    int mul(int, int);
    printf("Enter two numbers: \n");
    scanf("%d%d",&x,&y);
    z = mul(x,y);           // function call by value
    printf("\n The product of the two numbers is: %d",z);
}

// Fuction to multiply two numbers
int mul(int a, int b)
{
    int c;
    c = a*b;
    return(c);
}