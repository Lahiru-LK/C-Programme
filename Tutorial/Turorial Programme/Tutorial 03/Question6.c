#include<stdio.h>

float getTotalPrice (char bookType, int qty);
float getDiscount (float TotPrice);
	
	
	float TotPrice,discount;
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
		
	TotPrice=getTotalPrice(bookType,qty);
	discount=getDiscount(TotPrice);	
	
	printf("\nInput Book Type: %c\n",bookType);
	printf("Input the Quantity: %d\n",qty);
	printf("Discount is Rs: %.2f\n",discount);
	printf("Total Price (After subtracting the discount amount): %.2f\n",TotPrice-discount);
	return 0;
		
}

float getTotalPrice(char bookType, int qty){
	float price; 
	
	switch(bookType){
		
		
		case 's':
		case 'S':
								
				price=(35.00*qty);	
				return price;
				break;
		
		case 'd':
		case 'D':
								
				price=(40.00*qty);	
				return price;
				break;
				
		case 'q':
		case 'Q':
								
				price=(45.00*qty);	
				return price;
				break;

		default:
				printf("\nError try agin\n");		 						
	}
}

float getDiscount(float TotPrice){
		float dic;
	if(TotPrice>=5000){
		dic=(TotPrice*10)/100;
		return dic;
	}
	else if(TotPrice>=2000 && TotPrice<=4999){
		dic=(TotPrice*5)/100;
		return dic;
	}
	else if(TotPrice>=500 && TotPrice<=1999){
		dic=(TotPrice*5)/100;
		return dic;
	}
	else if(TotPrice<=499){
		dic=(TotPrice*0)/100;
		return dic;
	}
}
