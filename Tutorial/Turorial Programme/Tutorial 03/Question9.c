#include<stdio.h>

int even(int arr[]);
int ev[];
int x;


int main(){

	printf("Enter array size : ");
	scanf("%d",&x);
	printf("\n");
	
	int arr[x];
	int ev[x];
	
	for(int i=0; i<x; i++){
		printf("%d-Enter number : ",i);
		scanf("%d",&arr[i]);
	}
	
	even(arr);

	return 0;		
}

 int even(int arr[x]){
	
	printf("\nInteger_Number\tEven(yes-1 no-0)\n\n");
	
	for(int i=0; i<x; i++){
		if(arr[i]%2==0){
			ev[i]=1;
		printf("    %4d  -------------  %d",arr[i],ev[i]);
		printf("\n");
			
		}
		else{
			ev[i]=0;
		printf("    %4d  -------------  %d",arr[i],ev[i]);
		printf("\n");
		}
	}

}