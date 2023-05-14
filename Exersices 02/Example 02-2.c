#include <stdio.h>

float cubeValue(float num){
	
	return (num*num*num);
}



int main(){
	
	float num,value;
	
	printf("Enter value : ");
	scanf("%f",&num);
	
	value=cubeValue(num);
	printf("\nCUbe %f value is %f ",num,value);
	
	return 0;
}
