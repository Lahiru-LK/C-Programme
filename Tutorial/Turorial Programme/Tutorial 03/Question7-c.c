#include<stdio.h>
int decimatToBinary(int num);
long long bn[];
int count,num;

int main(){
	
printf("Enter decimal number : ");
scanf("%d",&num);

decimatToBinary(num);

printf("\nBinary numbers are :");
for(int i=count; i>=0; i--){
	printf("%d",bn[i]);
}

	return 0;		
}


int decimatToBinary(int num){
	int i=0;
	while(num!=0){
	
		bn[i]=num%2;
		num=num/2;
		++i;
		count=i;
	}
	return bn;
}