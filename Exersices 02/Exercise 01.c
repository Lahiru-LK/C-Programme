#include <stdio.h>

void  maxnum(int num1,int num2);

void main(){
	
	int a,b;
	
	printf("Enter fist number : ");
	scanf("%d", &a);
	printf("Enter second number : ");
	scanf("%d", &b);
	
	maxnum(a,b);
	
}	

void maxnum(int num1,int num2)
{
	
	int answer;
	
	if(num1>num2){
		answer=num1;
	} 
	else{
		answer=num2;
	}
	
	printf("\nMaximum number is : %d",answer);
}
