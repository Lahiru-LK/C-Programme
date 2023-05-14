#include<stdio.h>

	int x=7;
	int newarr(int A[x],int B[x]);
	int A[7]={9,4,7,2,7,12,24};
	int B[7]={12,8,23,9,18,6,3}; 
	int C[7];

int main(){

		newarr(A,B);
		printf("Calculate A * B and store in Array C = ");
			for(int i=0; i<x; i++){
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


newarr(int A[x],int B[x]){

		for(int i=0; i<x; i++){
			C[i]=A[i]*B[i];
	
		}
		return C;
}