/*Write a program that performs the following, depending upon the choice selected by the user
(i) calculate the square of number if choice is 1
(ii) calculate the cube of number if choice is 2 and 4
(iii) calculate the cube of the given number if choice is 3
(iv) otherwise print the number as it is
*/

#include<stdio.h>

int main()
{
    int choice, n;
    printf("\n Enter any number: \n");
    scanf("%d",&n);
    printf("Choice is as follows:\n\n");
    printf("1. To find square of the number \n"); 
    printf("2. To find square-root of the number \n"); 
    printf("3. To find cube of the number \n"); 
    printf("4. To find square-root of the number \n\n"); 
    printf("Enter your choice: \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: printf("The square of the number id %d\n", n*n);
        break;
    case 2:
    case 4: printf("The square-root of the given number is %f", sqrt(n));
        break;
    case 3: printf("The cube fo the given number is %d",n*n*n);
    default: printf("The number you had given is %d", n);
        break;
    }

}