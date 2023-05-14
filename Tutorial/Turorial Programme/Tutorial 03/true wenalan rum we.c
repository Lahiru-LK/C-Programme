#include<stdio.h>

float GetTotalPrice (char bookType, int qty);
	float total;
	char bookType;
	int qty,d;

int main(){


	
	printf("\n\nBook type\t\tPrice per unit\n");
	printf("Single rule-s\t\tRs.35.00\n");
	printf("Double rule-d\t\tRs.40.00\n");
	printf("Square rule-q\t\tRs.45.00\n");
	
	
	printf("\nEnter booktype : ");
	scanf(" %c",&bookType);
	
	printf("Enter quantity : ");
	scanf("%d",&qty);
		
	total=GetTotalPrice(bookType,qty);	
	
	printf("\nYes-1\nNo-0\nDo you want to book:");
	scanf("%d",&d);
	
	if(d==1){
		
		 main();
	}
	else{
		printf("\nTotal %.2f\n",total);
		return 0;
	}	
}

float GetTotalPrice(char bookType, int qty){
	float price; 
	
	switch(bookType){
		
		
		case 's':
		case 'S':
								
				price=total+(35.00*qty);	
				return price;
				break;
		
		case 'd':
		case 'D':
								
				price=total+(40.00*qty);	
				return price;
				break;
				
		case 'q':
		case 'Q':
								
				price=total+(45.00*qty);	
				return price;
				break;

		default:
				printf("\nError try agin\n");		 						
	}
}