#include<stdio.h>

int facter(int fact);

void main(){
	int fact;
	
 printf("Enter Number : ");
 scanf("%d",&fact);
 
 printf("\n");	
 
 facter(fact);

 
	
}

int i=0;
int facter(int num)
{
	i=i+1;	
	if(i<=num){
		
		if(num%i==0){	
				printf("%d Fact Number is %d \n",num,i);
				facter(num);
		}
		else{
			facter(num);
		}
		
	}	
	
}


