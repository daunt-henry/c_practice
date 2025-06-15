
// Q.1 Write a Program using functions to find average of three number.

#include<stdio.h>
int average(int a, int b, int c );

int main(){
	int avg = average(3, 4, 5);	
	printf("The value of Average is %d\n", avg);
    return 0; 
}

int average (int a, int b, int c){
	int result;
	result = (a+b+c)/2;
	return result;
}
 