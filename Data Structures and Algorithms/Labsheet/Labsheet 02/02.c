#include<stdio.h>
#define MAX 3

typedef struct{
	int TOP;
	int ele[MAX];
}stack;

void init(stack *s)
{
	s->TOP=-1;  
}

int isFull(stack *s)
{
	if(s->TOP==MAX-1)
	return 0;
	else
	return -1;
}

int isEmpty(stack *s)
{
	if(s->TOP==-1)
		return 0;
	else
		return -1;
}

int pop(stack *s,int *item)
{
	if(!isEmpty(s)){
		printf("\nStack is empty");
		return -1;
	}
	*item=s->ele[s->TOP];
	s->TOP=s->TOP-1;
	
	return 0;
}
void push(stack *s, int item) {
 if(!isFull(s))

{
 printf("\nStack is full");
 return;

}

s->TOP = s->TOP + 1;

s->ele[s->TOP] = item;
}


int main()
{
	stack s;
	int item;
	
	init(&s);
	
	push(&s,10);
	push(&s,20);
	push(&s,30);
	pop(&s,&item);
	printf("\nPoped Item: %d",item);
	pop(&s,&item);
	printf("\nPoped Item: %d",item);
	pop(&s,&item);
	printf("\nPoped Item: %d",item);
	return 0;
}
