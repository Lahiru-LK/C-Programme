#include<stdio.h>
#include "circleFunction.c""

double diameter(double r),circumference(double r),area(double r);

void main(){
	double r; // r is Reads
	
	printf("Enter reads(r) value : ");
	scanf("%lf",&r);
		
	printf("\nDiameter of a Circle 	  : %.2lf ",diameter(r));
	printf("\nCircumference of a Circle : %.2lf ",circumference(r));
	printf("\nArea of a Circle	  : %.2lf ",area(r));
	
	
}
