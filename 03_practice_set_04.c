/*Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user*/

#include<stdio.h>

int main(){
    int year;

    printf ("Enter a year know if it is a leap year or not: \n");
    scanf("%d", &year);

    if(year%4){
        printf("It is a normal year");
    }
    else{
        printf("Hurray! It is a leap year");
        
    }

    return 0;
}