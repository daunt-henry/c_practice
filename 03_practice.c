/*Write a program to convert Celcius(Centigrade degrees temperature to Farenheit)*/

#include<stdio.h>

int main(){
    float celsius = 3, far; 
    far = (celsius * 9 / 5) + 32 ;
    printf("The value of this celsius temperature is Fahrenheit is %f", far);
    return 0;
}