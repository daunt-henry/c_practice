/* Write a program to display the string "UNIX" in the following format

    U
    UN
    UNI
    UNIX
    UNIX
    UNI
    UN
    U
*/

// Program to display the string in the above shown format

#include<stdio.h>
int main()
{
    int x, y;
    static char string[ ] = "UNIX";
    printf("\n");
    for(x= 0; x<4; x ++)
    {
        y = x + 1;

    // reserves 4 character of space on to the monitor and minus sign is for left justified

        printf("%-4.*s \n", y, string);

    // and for every loop the * is replaced by value of y
    // y vlaue starts with 1 and for every time it is incremented by 1 until it reaches to 4
    }

    for(x=3;x>=0;x--)
        {
            y = x+1;
            printf("%-4.*s\n",y,string);
        // y value starts with 4 and for every time it is decrements by 1 until it reaches to 1
        }
}
