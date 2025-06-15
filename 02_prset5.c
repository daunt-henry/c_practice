//Q.2 Write a function to convert Celsius temperature to farenheit.
// Ans.
#include<stdio.h>
float fah (float celsius);
int main(){
	float fahrenheit, celsius;
	printf("Enter the degree of Celsius \n");
	scanf("%f", &celsius);
	fahrenheit = fah(celsius);
	printf("After conversion the value of fahrenheit is %f\n", fahrenheit);
	return 0;
}

float fah(float celsius){
	float fah;
	fah = ( celsius * 9/5) + 32;
	return fah;
}




	

