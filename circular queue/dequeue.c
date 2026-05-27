#include<stdio.h>
#define max 5
int queue [max];
int front = -1;
int rear = -1;
int data;
void dequeue()
{
    if(front==-1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    

    
    else if (front == rear)
    {
        int data = queue[front];
        printf("Dequeued element : %d \n",data);
        front = rear = -1;
    }
    else 
    {
        int data = queue[front];
        printf("Dequeued element : %d\n",data);
        front = (front +1 ) % max;
    }
}
int main()
{
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    return 0;

}
