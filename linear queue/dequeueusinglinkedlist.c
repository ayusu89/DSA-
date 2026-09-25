
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node  *rear = NULL;

// Enqueue
void enqueue(int data)
{
    struct node *newnode;
    newnode  =  (struct node *) malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (rear == NULL)
    {
      front = rear = newnode;
    }
        
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

// Dequeue
void dequeue()
{
    struct node *temp;

    if (front == NULL)
    {
        printf("LIST IS EMPTY \n");
         return;
    }
    temp = front;
    front = front->next;
    free(temp);

    if (front == NULL)
    {
         rear = NULL;
    }
       
}

// Display
void display()
{
    struct node *temp = front;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("Before dequeue : ");
    display();

    dequeue();

    printf("After dequeue: ");
    display();

    return 0;
}
