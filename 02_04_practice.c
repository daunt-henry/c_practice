/* Explain step by step evaluation of 3 * x/y - z + k 
where x = 2 y =3 z = 3 k = 1
*/

#include<stdio.h>

int main(){
    // int num;
    // printf("Enter the number \n");
    // scanf("%d", &num);
    // printf("Divisible test return: %d\n", num%97);    

    int x = 2, y = 3, z = 3, k=1;
    int result = 3 * x/y - z + k;
    /*
    6/3 - 3 + 1
    2 - 3 + 1
    - 1 + 1
    0
    */
   printf("The value of result is %d", result);
    return 0;
}