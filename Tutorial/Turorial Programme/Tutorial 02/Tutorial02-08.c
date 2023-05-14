#include<stdio.h>
#include<math.h>

int main(){

	double C,a,b;
	
	printf("Enter lendth 'a': ");
	scanf("%lf",&a);
	printf("Enter lendth 'b': ");
	scanf("%lf",&b);
	
	C=sqrt((pow(a,2)+pow(b,2)));

	printf("\nHypotenuse is 'C': %.2lf ",C);	
	
	return 0;
}
