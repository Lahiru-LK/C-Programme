#include <stdio.h>

int  maxnum(int num1,int num2);

void main(){
	
	int a,b,answer;
	
	printf("Enter fist number : ");
	scanf("%d", &a);
	printf("Enter second number : ");
	scanf("%d", &b);
	
	answer=maxnum(a,b);
	printf("\nMaximum number is : %d",answer);
	
}	

int maxnum(int num1,int num2)
{
	
	int answer;
	
	if(num1>num2){
		answer=num1;
	} 
	else{
		answer=num2;
	}
	
	return answer;
}
