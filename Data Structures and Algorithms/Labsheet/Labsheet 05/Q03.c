#include <stdio.h>
#include <stdlib.h>

struct node { 
    int data; 
    struct node *next; 
};

struct queue { 
    struct node *front; 
    struct node *rear; 
};

void initialize(struct queue *q) {
    q->front = NULL;
    q->rear = NULL;
}

int isEmpty(struct queue *q) {
    return (q->front == NULL);
}

void enqueue(struct queue *q, int a) {
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    temp->data = a;
    temp->next = NULL;
    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
}

int dequeue(struct queue *q) {
    if (q->front == NULL) {
        printf("Queue is empty\n");
        return -1;
    }
    struct node *temp = q->front;
    int item = temp->data;
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    free(temp);
    return item;
}

void display(struct node *head) {
    if (head == NULL) {
        printf("Queue is empty\n");
        return;
    }
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct queue q; 
    initialize(&q); 
    
    int choice, item;
    while (1) {
        printf("\n\n1: Initialize\n");
        printf("2: Is Empty\n");
        printf("3: Enqueue\n");
        printf("4: Dequeue\n");
        printf("5: display\n");        
        printf("6: Exit\n\nEnter your choice\n\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                initialize(&q);
                break;
            case 2:
                if (isEmpty(&q))
                    printf("Queue is empty\n");
                else
                    printf("Queue is not empty\n");
                break;
            case 3:
                printf("Enter the item to enqueue\n");
                scanf("%d", &item);
                enqueue(&q, item);
                break;
            case 4:
                item = dequeue(&q);
                if (item != -1)
                    printf("Dequeued item: %d\n", item);
                break;
            case 5:
                display(q.front);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}