// Program that reads the name and display the hello along with your name

#include<stdio.h>
int main()
{
    char name[10];
    printf("\nEnter Your Name: ");
    scanf("%s", name);
    printf("Hello %s\n", name);
}