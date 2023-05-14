#include<stdio.h>
#include<stdlib.h>
struct node
{
	int num;
	struct node *nextptr;
};


struct node* head=NULL;


void create();
void insert_begin();
void insert_middle();
void insert_end();
void delete_begin();
void delete_middle();
void delete_end();
void print();
void findElement();
int nodeCount();


int main()
{
    int n;
	int choice;
	while(1)
	{
		printf("\t\t***-----------***\n\n");
		printf("0: Create List\n");
		printf("1: Insert Begin Element\n");
		printf("2: Insert Middle Element\n");
		printf("3: Insert End Element\n");
		printf("4: Dlete Begin Element\n");
		printf("5: Dlete Middle Element\n");
		printf("6: Dlete End Element\n");
		printf("7: Print List\n");
		printf("8: Find Element\n");
		printf("9: Node Count\n");
		printf("10: Exit\n\n");
		
		
		printf("\tEnter Your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 0:
				create();
				break;
			case 1:
				insert_begin();
				break;
			case 2:
				insert_middle();
				break;
			case 3:
				insert_end();
				break;
			case 4:
				delete_begin();
				break;
			case 5:
				delete_middle();
				break;
			case 6:
				delete_end();
				break;
			case 7:
				print();
				break;
			case 8:
				findElement();
				break;
		//-------------------		
			case 9:
                n=nodeCount();
                if(n==0)
                {

                }
                else
                {
                    printf("List have %d nodes\n",n);
                }
				break;
		//------------------------------	
			case 10:
				exit(0);
				break;
			default:
				printf("\nInvalid Input try Again\n");
		}
	}
	return 0;
}


void create()
{
	struct node *temp,*new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	if(new_node==NULL)
	{
		printf("out of Memory \n");
	}
	printf("Enter Your Data to Add:");
	scanf("%d",&new_node->num);
	new_node->nextptr=NULL;
	if(head==NULL)
	{
		head=new_node;
	}
	else
	{
		temp=head;
		while(temp->nextptr!=NULL)
		{
			temp=temp->nextptr;
		}
		temp->nextptr=new_node;
	}
}
//**********************************************

void insert_begin()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("OVERFLOW\n");
	}
	printf("Enter Your Data to Add:");
	scanf("%d",&temp->num);
	temp->nextptr=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		temp->nextptr=head;
		head=temp;
	}
}

//******************************************
void insert_middle()
{
    struct node *temp,*new_node;
    int loc;
	new_node=(struct node*)malloc(sizeof(struct node));
	if(new_node==NULL)
	{
		printf("OVERFLOW\n");
	}
    	printf("Enter Your Data to Add:");
	scanf("%d",&new_node->num);
	new_node->nextptr=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
	    temp=head;
        int count=0;
		while(temp!=NULL)
		{
		    ++count;
			temp=temp->nextptr;
		}
        printf("Enter  Location:");
        scanf("%d",&loc);
		if(loc>count)
        {
            printf("Out Of Location Currently have %d nodes:\n",count);
        }
        else if(loc>1)
        {
            struct node *p;
            p=head;
            for(int i=1;i<loc-1;i++)
            {
                p=p->nextptr;
            }
            new_node->nextptr=p->nextptr;
            p->nextptr=new_node;
        }
	}
}

//**************************************
void insert_end()
{
	struct node *temp,*new_node;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("Overflow\n");
	}
	
	printf("Enter Your Data to Add:");
	scanf("%d",&new_node->num);
	new_node->nextptr=NULL;
	
	if(head==NULL)
	{
		head=new_node;
	}
	else
	{
		temp=head;
		while(temp->nextptr!=NULL)
		{
			temp=temp->nextptr;
		}
		temp->nextptr=new_node;
	}
}

//***************************************************
void delete_begin()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	{
		printf("list is empty\n");
	}
	else
    {
        temp=head;
        head=temp->nextptr;
        printf("%d is Deleted\n",temp->num);
        temp->nextptr=NULL;
        free(temp);
    }
}

//**********************************************************
void delete_middle()
{
	struct node *temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	{
		printf("list is empty\n");
	}
	else if(head->nextptr==NULL)
    {
        printf("%d is Deleted",head->num);
        temp=NULL;
        head=temp;
        free(temp);
    }
    else
    {
        int count=0;
        temp=head;
		while(temp!=NULL)
		{
			temp=temp->nextptr;
			++count;
		}
		int loc;
		printf("Enter  Location:");
		scanf("%d",&loc);
		if(loc>count)
        {
            printf("Out Of Location Currently have %d nodes:\n",count);
        }
        else if(loc==1)
        {
            temp=head;
            printf("%d is Deleted\n",temp->num);
            head=temp->nextptr;
            temp->nextptr=NULL;
            free(temp);
        }
        else
        {
            p=head;
            temp=head->nextptr;
            for(int i=1;i<loc-1;i++)
            {
                temp=temp->nextptr;
                p=p->nextptr;
            }
            p->nextptr=temp->nextptr;
            temp->nextptr=NULL;
            printf("%d is Deleted\n",temp->num);
            free(temp);
        }
    }
}

//****************************************************************
void delete_end()
{
	struct node *temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	{
		printf("list is empty\n");
	}
	else if(head->nextptr==NULL)
    {
        printf("%d is Deleted",head->num);
        temp=NULL;
        head=temp;
        free(temp);
    }
	else
    {
        p=head;
        temp=head->nextptr;
        while(temp->nextptr!=NULL)
        {
            temp=temp->nextptr;
            p=p->nextptr;
        }
        printf("%d is Deleted",temp->num);
        p->nextptr=NULL;
        free(temp);
    }
}

//******************************************************************
void print()
{
    struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=head;
	if(temp==NULL)
    {
        printf("List Is Empty\n");
    }
    else
    {
        int i=1;
        while(temp!=NULL)
        {
            printf("[%d] Element %d->",i,temp->num);
            temp=temp->nextptr;
            i=i+1;
        }
        printf("\n");
    }
}

//********************************************************
void findElement()
{
    struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=head;
	if(temp==NULL)
    {
        printf("List Is Empty\n");
    }
    else
    {
        int find;
        printf("Enter your number to find in linked list:");
        scanf("%d",&find);
        int i=1;
        while(temp!=NULL)
        {
            if(temp->num==find)
            {
                printf("You find the number is:%d have the list\n",temp->num);
                break;
            }
            temp=temp->nextptr;
            i=i+1;
        }
        if(temp==NULL)
        {
            printf("Can not find number is not heare\n");
        }
        printf("\n");
    }
}

//**************************************************************************
int nodeCount()
{
        struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node));
        temp=head;
        if(temp==NULL)
        {
            printf("List Is Empty\n");
        }
        else
        {
            int count=0;
            while(temp!=NULL)
            {   ++count;
                temp=temp->nextptr;
            }
            return count;
        }
}
