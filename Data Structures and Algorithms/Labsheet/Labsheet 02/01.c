#include<stdio.h>
#include<stdlib.h>
#define Max 5
	
struct stack{
int arr[Max];
int top;
}st;
	
	void display();
	int main(){
	
	int choice;
	st.top= -1;
	do {
		printf("\n\n\t 1. push an element into stack :- ");
		printf("\n\n\t 2. pop an element from stack :- ");
		printf("\n\n\t 3. display the elements of the stack :- ");
		printf("\n\n\t 4. Exit from the program");
		printf("\n\n\t enter your choice:- ") ;
		scanf("%d", choice);
	
		switch (choice){
		case 1:
		 	push();
		 	break;
		case 2:
			pop();
		
		case 3:
			display();
			break;
		case 4:
		 	exit(0);
			break;
		default:
			printf("\n\n\t wrong entry try again");
		 	break;
		}
		
	}
	while(choice!=4);
return 0;
}
	
void push(){
	
	int item;
	if(st.top== Max -1)
		printf("\n\n\t the stack is full/overflow....");
	else{
		printf("\n\n\t Enter the element to be pushed into to the stack");
	 	scanf("%d", &item);
	 	st.top++;
		st.arr[st.top]=item;
		}
}
	void pop(){
		
		if (st.top==-1)
	 	printf("\n\n\t Stack is Empty/Underflow ......");
	else{
		int item;
		item= st.arr[st.top];
		st.top--;
		printf("\n\n\t the pop elelmen is:- %d",item);
	 	}
	}
	void display(){
		int i;
	if (st.top== -1)
		printf("\n\n\t The stack is empty ......");
	else{
		printf("\n\n\t The contents of the stack are......");
		for(i=st.top;i>=0;i--){
	 	printf("%d\t" , st.arr[i]);
	 	}
	}
}



