#include<stdio.h>

int main(){
    int age;
    int vipPass = 0;
    // vipPass = 1;

    printf("Enter your age\n");
    scanf("%d", &age);
    if(age<=70 && age>18 || vipPass == 1){
        printf("You are above 18 and below 70, you can drive");
    }
    else{
        printf("You cannot drive");
    }

    if(age == 50){
        printf("Half Century\n");
    }
    return 0;
}