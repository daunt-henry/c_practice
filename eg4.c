/* Write a program to avoid grades to students depending upon the criteria mentioned below:
 . Marks less than or equal to 50 are given "D" grade
 . Marks above 50 but below 60 are given "C" grade
 . Marks between 60 to 75 are given "B" grade
 . Marks greater than 75 are given "A" grade
*/

/* Program to avoid grades */
#include<stdio.h>
int main()
{
    int result;
    printf("Enter the total marks of a student: \n");
    scanf("%d",&result);
    if(result <= 50)
        printf("Grade D \n");
            else if(result <= 60)
                printf("Grade C\n");
            else if(result <= 75)
                printf("Grade B \n");
                else
                    printf("Grade A \n");
}