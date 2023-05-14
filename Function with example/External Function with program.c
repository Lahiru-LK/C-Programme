#include <stdio.h>
#include "function01.c"

void main(){
	double answer;
	double num1;
	
	printf("Enter number : ");
	scanf("%lf",&num1);
	
	answer=calclu(num1);
	
	printf("Anser is %lf ",answer);
}
