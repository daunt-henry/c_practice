/* Write a program to generate the following pattern given below:
1
1 2 
1 2 3 
1 2 3 4
*/

// Program to print the pattern

#include<stdio.h>
main()
{
    int i,j;
    for(i = 1;i<=4; ++i)
    {
        printf("%d\n", i);
        for(j = 1;j<=i; ++j)
            printf("%d\t",j);
    }
}