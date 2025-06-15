#include<stdio.h>
int main()
{
    int i , n = 3;
    for(i=3;n<=20;++n)
    {
        if(n%i == 0)
        break;
        if(i == n)
        printf("%d\n",i);
    }
}