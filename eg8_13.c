// Write a program to find factorial of a number

#include<stdio.h>
main()
{
    int n, factorial;
    int fact(int);
    printf("Enter any number: \n");
    scanf("%d", &n);
    factorial = fact (n);  // function call
    printf("Factorial is %d\n", factorial);
}

// Non recursive function of factorial

int fact (int n)
{
    int res = 1, i;
    for (i = n; i>=1; i--)
    res = res * i;
    return(res);
}