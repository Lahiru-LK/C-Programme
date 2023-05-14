#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char Data;
    struct Node *Next;
};

struct Node *head = NULL;

void initialize();
void push();
int pop();
int isEmpty();
void display();

int main()
{
    int choice;

    while (1)
    {
        printf("\n\n1: Initialize\n");
        printf("2: Push\n");
        printf("3: Pop\n");
        printf("4: Is Empty\n");
        printf("5: Display\n");
        printf("6: Exit\n\nEnter your choice\n\n");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            initialize();
            break;
        case 2:
            push();
            break;
        case 3:
            if (pop())
            {
                printf("\nElement popped successfully\n");
            }
            else
            {
                printf("\nStack is empty\n");
            }
            break;
        case 4:
            if (isEmpty())
            {
                printf("\nStack is empty\n");
            }
            else
            {
                printf("\nStack is not empty\n");
            }
            break;
        case 5:
            display();
            break;
        case 6:
            return 0;
            break;
        default:
            printf("\nNot a valid choice\n");
            break;
        }
    }

    return 0;
}

void initialize()
{
    head = NULL;
}

void push()
{
    char data;
    printf("Enter a character to push: ");
    scanf(" %c", &data);

    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->Data = data;
    new_node->Next = head;
    head = new_node;
}

int pop()
{
    if (head == NULL)
    {
        return 0;
    }

    struct Node *temp = head;
    head = head->Next;
    free(temp);
    return 1;
}

int isEmpty()
{
    return head == NULL;
}

void display()
{
    if (head == NULL)
    {
        printf("\nStack is empty\n");
        return;
    }

    struct Node *temp = head;
    printf("\nStack elements:\n");
    while (temp != NULL)
    {
        printf("%c\n", temp->Data);
        temp = temp->Next;
    }
}
