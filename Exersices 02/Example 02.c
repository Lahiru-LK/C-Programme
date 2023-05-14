#include <stdio.h>

float num;

float cubeValue(){
	
	printf("Enter number : ");
	scanf("%f",&num);
	
	return (num*num*num);
	
}


int main(){
	
	float value;
	
	value=cubeValue();
	
	printf("\nCUbe %f value is %f ",num,value);
	
	return 0;
}
