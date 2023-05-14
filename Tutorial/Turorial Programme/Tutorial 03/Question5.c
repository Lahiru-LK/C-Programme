#include<stdio.h>

	int A[7]={9,4,7,2,7,12,24};
	int B[7]={12,8,23,9,18,6,3}; 
	int C[7];

int main(){
	
	for(int i=0; i<7; i++){
		C[i]=A[i]*B[i];	
	}
	
	printf("\nCalculate A * B and store in Array C = ");
	for(int i=0; i<7; i++){
				if(i==0){
					printf("{ ");
				}
				
				printf(" %d",C[i]);
				
				if(i<6){
				printf(",");
				}
				
				if(i==6){
					printf(" }");
				}
			}

	return 0;
}
