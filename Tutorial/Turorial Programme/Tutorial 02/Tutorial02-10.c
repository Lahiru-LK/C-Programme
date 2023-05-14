#include<stdio.h>

int main(){
	float a,b;
	
	printf("Enter First number : ");
	scanf("%f",&a);
	printf("Enter Second number: ");
	scanf("%f",&b);
	

	printf("\nSum is 		%.2f+%.2f = %.2f\nProduct is 	%.2f*%.2f = %.2f\nDifference is 	%.2f-%.2f = %.2f",a,b,a+b,a,b,a*b,a,b,a-b);

	int x=(float)a;
	int y=(float)b;

	printf("\nQuotient is 	%.2f/%.2f = %d",a,b,x/y);
	printf("\nRemainder is 	%.2f%%%.2f = %d",a,b,x%y);
	return 0;
}
