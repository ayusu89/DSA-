#include<stdio.h>
#define max 5
int data;
int queue [max];
int front = -1;
int rear = -1;
void enqueue (int data)
{
    if (rear == max-1)
    {
        printf("Queue is full \n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear =0;
        queue[rear] = data;
        printf("Inserted data : %d \n",data);
    }
    else
    {
        rear ++;
        queue[rear] = data;
        printf("Inserted data : %d \n",data);
    }
}
void dequeue ()
{
    if (front == -1)
    {
        printf("Queue is empty \n");
    }
    else if (front == rear)
    {
        front = rear = -1;
        int data = queue [front];
        printf("Deleted data is : %d \n",data);
    }
    else 
    {
        int data = queue [front];
        printf("Deleted data is : %d \n",data);
        front ++;
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(20);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    return 0;
}
