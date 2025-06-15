// Write a program to calculate the net salary of an employee, if a tax of 15% is levied on his gross-salary if it exceeds Rs. 10,000/- per month.

/* Program to calculate the net salary of an employee */

#include <stdio.h>
int main(){

    float gross_salary, net_salary;

    printf("Enter gross salary fo an employee\n");
    scanf("%f", &gross_salary);

    if(gross_salary<10000)
        net_salary = gross_salary;
    if(gross_salary>=10000)
        net_salary = gross_salary-0.15*gross_salary;

    printf("\nNet salary is Rs.%2f\n", net_salary);
}