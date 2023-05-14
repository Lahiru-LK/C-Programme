#include<stdio.h>

int smarr[3];
int smallnum,min;

int main(){
	
	for(int i=0; i<3; i++){
		printf("%d-Enter 3 interger : ",i);
		scanf("%d",&smarr[i]);
	}
	smallnum=smallest(smarr);

	printf("\nSmallerst number is : %d",smallnum);
	return 0;		
}

smallest(int smarr[3]){
	int sm;
	
	min=smarr[0];
	
	for(int i=0; i<3; i++){
		if (min>smarr[i]){
			sm=smarr[i];
		}
		else{
			sm=min;
		}
	}
	
	return sm;
}
