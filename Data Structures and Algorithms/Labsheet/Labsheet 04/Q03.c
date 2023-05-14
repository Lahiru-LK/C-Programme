#include<stdio.h>
#include<stdlib.h>

//struct 
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};


void DlListcreation();
void displayDllist();
void displayDllistreverse();

struct node *head=NULL; //***************
struct node *tal=NULL;		//**************




//main function 
int main()
{
    int choice;
	while(1)
	{
		printf("\t\t-------------\n\n");
		printf("1: Create Doubly linked list\n");
		printf("2: Display Doubly linked list\n");
		printf("3: Display Doubly linked list Reverse\n");
		printf("4: Exit\n\n");
		printf("\tEnter Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				DlListcreation(); //function of dikistcreation
				break;
			case 2:
				displayDllist();//function of  display dilist
				break;
			case 3:
				displayDllistreverse(); 
            case 4:
                exit(0); //function of exit programe 
                break;
			default:
				printf("\nInvalid Input\n");
		}
	}
    return 0;
}
void displayDllistreverse()
{
        if(head==NULL)
        {
            printf("Dubly linked list is Empty\n");
        }
        else
        {
            struct node *temp;
            temp=tal;
            while(temp!=NULL)
            {
                printf("%d-><-",temp->data);
                temp=temp->prev;
            }
            printf("\n");
        }
}


void DlListcreation()
{
        struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node));
        if(temp==NULL)
        {
            printf("Out of Memory\n");
        }
        printf("Enter Your Element num:");
        scanf("%d",&temp->data);
        temp->prev=NULL;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            tal=temp;
        }
        else
        {
            struct node *p;
            p=head;
            {
                while(p->next!=NULL)
                {
                    p=p->next;
                }
                p->next=temp;
                temp->prev=p;
                tal=temp;
            }
        }
}
void displayDllist()
{
        if(head==NULL)
        {
            printf("Dubly linked list is Empty\n");
        }
        else
        {
            struct node *temp;
            temp=head;
            while(temp!=NULL)
            {
                printf("%d-><-",temp->data);
                temp=temp->next;
            }
            printf("\n");
        }
}

