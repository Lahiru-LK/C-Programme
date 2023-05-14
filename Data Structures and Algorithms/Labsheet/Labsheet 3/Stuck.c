#include<stdio.h>
#include<stdlib.h>
#define MAX 5


int queue_array[MAX];
int front = -1;
int rear = -1;
int element;

void enqueue(int element);

int dequeue();
int isEmpty();
int isFull();
int peek();

void display();

void main(){
			int option;
			while(1){
					 printf("\n1. Insert Element in Queue");
					 printf("\n2. Delete Element from Queue");
					 printf("\n3. Display All the Elements of Queue");
					 printf("\n4. Display Element at the Front position");
					 
					 printf("\nEnter your option:\t");
					 scanf("%d", &option);
					 
					switch(option){
					 				case 1: 
									 		printf("\nEnter Element to be Inserted:\t");
					 						scanf("%d", &element);
					 						enqueue(element);
					 						break;
									case 2: 
											element = dequeue();
					 						printf("\nDeleted Element From Queue:\t%d", element);
											break;
			 
									case 3: 
											display();
			 								break;
									case 4: 
											printf("\nElement at Front of Queue:\t%d", peek());
											break;
									case 5: 
										   exit(1);
					}
			 }
			 printf("\n");
}


 
void enqueue(int element){
	printf("\n\n");
	
	if(rear == MAX-1){
		printf("Data insert full");
		}
		else{
			if(front==-1){
				front=0;
				rear = rear+1;
				queue_array[rear] =  element;
				}
		
		}
}

 
int dequeue(){

return 0;	
}
int isEmpty(){

return 0;	
}
int isFull(){

return 0;	
}
int peek(){

return 0;	
}

void display(){
	printf("\n\n");
	int i;
	
	if(front==-1){
		printf("Empty\n");
	}
	else{
		for(i=front; i<=rear; i++){
		printf("%d",queue_array[i]);
		}	

	}
	
}
 
 
