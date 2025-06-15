// Write a program to find the sum of the first ten natural numbers.

// PRogarm to find sum of first ten naturn numbers

#include<stdio.h>

int cal_sum()
{   
    int i, s=0 ;
    for(i=0; i<=10; i++)
    s = s+i;
    return(s);              // function returning sum of first ten natural numbers
}

main()
{
    int sum;
    sum = cal_sum();
    printf("Sum of first ten natural numbers is %d\n", sum);
}