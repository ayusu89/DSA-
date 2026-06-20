// enqueue using linked list
#include<stdio.h>
#include<stdlib.h>
struct node 
{
    struct node *next ;
    int data;
};
struct node *newnode ;
struct node *front = NULL;
struct node *rear = NULL;

// function to insert element into the queue 

void enqueue (int data )
{
    newnode = (struct node *)malloc(sizeof (struct node ));
    if(newnode==NULL)
    {
        printf("MEMORY NOT ALLOCATED \n");
        return ;
    }
    newnode -> data = data;
    newnode->next = NULL;
    
    if (rear == NULL)
    {
        front = rear = newnode ;
    }
    
    else

    {
        rear -> next = newnode ;
        rear = newnode ;
    }

    printf("Enqueued = %d \n",data);
}

// function to dequeue the element from the queue 

void dequeue ()
{
    if (front == NULL && rear == NULL)
     {
        printf("Queue is empty.\n");
        return ;      // indicate failure
     }
    struct node* temp = front;
    int data = temp->data;
    front = front->next;

    free(temp);
    printf("Dequeued: %d\n", data);
    return  ;
}

// program execution

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    dequeue();
    dequeue();
    return 0 ;
}

