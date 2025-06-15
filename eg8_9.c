// Write a program to calculate sum of any three given numbers

#include<Stdio.h>

int main()
{
    int a1, a2,a3;
    void sum(int,int,int);
    printf("%d%d%d", &a1,&a2,&a3);
    sum(a1,a2,a3); // Type 3 function
}

// function to calculate sum of three numbers
void sum(int f1, int f2, int f3)
{
    int s;
    s = f1+f2+f3;
    printf("\nThe sum fo the three numbers is %d\n",s);
}