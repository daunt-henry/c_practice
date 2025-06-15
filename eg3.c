/*  Write a program to calculate an Air ticket fare after discount, given the following conditions:
    . If passenger is below  14 years then there is 50% discount on fare
    . If passenger is above 50 years then there is 20% discount on fare
    . If passenger is above 14 and below 50 then there is 10% discount on fare.
*/

/* Program to calculate an Air ticket fare after discount */

#include<stdio.h>
int main()
{
    int age;
    float fare;
    printf("\n Enter the age of Passenger \n");
    scanf("%d", &age);
    printf("\n Enter the Air ticket fare \n");
    scanf("%f", &fare);
    if(age<14)
        fare = fare - 0.5 * fare;
    else
        if(age <= 50)
        {
            fare = fare - 0.1 * fare;
        }
         else
        {
            fare = fare - 0.2 * fare;
        }
    printf("\n Air ticket fare to be charged after discount is %2f", fare);
}
