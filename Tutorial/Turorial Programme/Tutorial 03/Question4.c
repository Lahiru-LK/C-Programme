#include<stdio.h>

int main(){

	int x,y=10,i=0;
	int arr[y];
	
			
	while(i<10){
	
		printf("%d-Enter  numbers between 0 and 100 : ",i);
		scanf("%d",&x);
		if(x>=0 && x<=100){
				arr[i]=x;
				i++;
			}	
		}
	printf("\n\nLess than 50  numbers : ");
		for(int i=0; i<y; i++){
			if(arr[i]<50){
				printf(" %d",arr[i]);
			}
		}	

	return 0;
}