/*Write a program to find out whether a student is pass or fail; if it requires total 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as an input from the user*/

#include<stdio.h>

int main(){
    float total;
    int physics, chemistry, maths;
    printf("Enter Physics marks\n");
    scanf("%d", &physics);
       
    printf("Enter Chemistry marks\n");
    scanf("%d", &chemistry);

    printf("Enter Maths marks\n");
    scanf("%d", &maths);

    total = (physics + maths + chemistry)/3;
    if((total<40)||physics<33 || maths<33 || chemistry<33){
        printf("Your total percentage is %f and you are failed\n", total);
    }
    else {
        printf("Your total percentage is %f and you are passed\n", total);
    }
    return 0;
}