/* Write a program to print first n natural numbers. 

Program to print first n natural numbers
*/

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter value of n \n");
    scanf("%d ",&n);
    printf("\nThe first %d natural numbers are : \n", n);
    for(i=1; i<=n; ++i)
{
    printf("%d ",i);
}
}