// How many times will hello be printed by the following program?

#include<stdio.h>
int main()
{
    int i = 5;
    while (i)
    {
        i = i-1;
        if(i==3)
        continue;
        printf("\nhello");
    }
}