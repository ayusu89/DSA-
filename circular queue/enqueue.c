#include<stdio.h>
#define max 5
int queue [max];
int data;
int front = -1;
int rear = -1;
void enqueue (int data)
{
    if((rear + 1)%max == front)
    {
        printf("Queue is full \n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear]=data;
        printf("Enqueued element : %d \n",data);
    }
    else 
    {
        rear = (rear + 1)%max;
        printf("Enqueued element = %d \n",data);
        rear ++ ;
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    return 0;
}