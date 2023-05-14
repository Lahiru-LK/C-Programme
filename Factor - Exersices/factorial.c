#include<stdio.h>

void main(){
	
	int fact=1,x;
	
	printf("Enter number : ");
	scanf("%d",&x);
	
	for(int i=1;i<=x;++i){
		
		fact=fact*i;
		
	}
	printf("%d",fact);	
}
