#include<stdio.h>

int main(){
	int factorial=1,x;
	
	printf("Enter any Number : ");
	scanf("%d",&x);
	
	
	for(int i=1; i<=x; i++){
		factorial *=i;
		printf("%d",i);
		if(i<x){
			printf(" * ");
		}
	}
	printf(" = %d",factorial);
	
	return 0;
}