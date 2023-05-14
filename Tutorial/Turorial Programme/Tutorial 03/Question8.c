#include<stdio.h>
int reverse (int num);
int num,x,i;
int n[100000000];


int main(){
	
	printf("Enter number : ");
	scanf("%d",&num);
	
	reverse(num);
	
	printf("\n\nGiven number is %d, the function should return ",num);
	for(int x=0; x<i; x++){
		printf("%d",n[x]);
	}
	
	return 0;
}

reverse(num){
	
	while(num!=0){
		n[i]=num%10;
		num=num/10;
		i++;
	}
	return n;
}