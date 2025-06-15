// To print the value of automatic variables

#include<stdio.h>
main(int argc, char*argv[])
{
    int a,b;
    double d;
    printf("%d", argc);
    a = 10;
    b = 5;
    d = (b*b) - (a/2);
    printf("%d, %d, %f", a,b,d);
}