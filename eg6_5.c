// Write a program to sort a list of elements using the selection sort method

// Sorting list of numbers using selection sort method

#include<stdio.h>
#define SIZE 5

int main()
{
    int j, min_pos,tmp;
    int i;          // Loop variable
    int a[SIZE];    // array declaration

    // enter the elements

    for (i = 0; i<SIZE;i ++)
    {
        printf("Element no. = %d", i + 1);
        printf("Value of the element: ");
        scanf("%d",&a[i]);
    }

    // Sorting by descending order

    for (i = 0;i<SIZE; i++)
    {
        min_pos = 1;
        for(j=i+1;i<SIZE;j++)
        if (a[j]<a[min_pos])
            min_pos = j;
        tmp = a[i];
        a[i] = a[min_pos];
        a[min_pos] = tmp;

        // print the result

        printf("The array after sorting:\n");
            for(i=0;i<SIZE;i++)
                printf("%d\n",a[i]);
    }

}