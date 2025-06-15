// Write a program to calculate the sum of three numbers

#include<stdio.h>
int main()
{
    int a1, a2,a3, result;
    int sum(int,int,int);
    printf("Please enter any 3 numbers:\n");
    scanf("%d%d%d,&a1,&a2,&a3");
    result = sum(a1,a2,a3); // function call
    printf("Sum of the given numbers is : %d\n", result);
}

// Function to calculate the sum of three numbers
int sum(int f1, int f2, int f3)
{
    return(f1 + f2 + f3);        // function returns a value
}