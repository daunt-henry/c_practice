/*Write a progarm to print n natural number in reverse order*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for(int i=n; i; i--){
        printf("The value of i is %d\n", i);
    }
    return 0;
}