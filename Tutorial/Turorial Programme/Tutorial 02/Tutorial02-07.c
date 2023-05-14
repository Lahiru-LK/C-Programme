#include<stdio.h>

int main(){

	int hour;
	float salary,rate;
	
	printf("Enter hour worked   : ");
	scanf("%d",&hour);
	
	printf("Enter hourly rate Rs: ");
	scanf("%f",&rate);   
	
	if(hour>8){
		salary=(rate*8)+300;	//If it is more than 8 hours, 300 rupees will be added	
		}
	else if((hour<=8) && (hour>6)){
		salary=(rate*hour)+100;	//If between 8 and 6 hours Rs. 100 will be added
		}
	else if((hour<=6) && (hour>4)){
		salary=(rate*hour)+50;	//If between 6 and 4 hours Rs. 50 will be added
		}
	else if((hour<=4) && (hour>2)){
		salary=(rate*hour)+20;	//If between 4 and 2 hours Rs. 20 will be added
		}
	else{
		salary=(rate*hour);
	}
	
	printf("\nSalary : Rs. %.2f ",salary);
	
	
	return 0;
}
