#include<stdio.h>
#define max 3
int queue [max];
int data ;
int front = -1;
int rear = -1;
void delete_from_rear()
{
    // checking if the queue is empty or not 

    if((front == -1) && (rear == -1))
        {  

            printf("Queue is empty \n");
        }

    // checking if front and rear are in same posititon 

    else if (front == rear)
        {
            int data = queue[rear];
            printf("DELETED ELEMENTS ARE : %d \n",data);
            front = -1;
            rear = -1;
        }

    // checking the position of rear 

    else if (rear == 0)
        {
            int data = queue[rear];
             printf("DELETED ELEMENTS ARE : %d \n",data);
            rear = max - 1;
        }
    
    else
        {
            int data = queue[rear];
            printf("DELETED ELEMENTS ARE : %d \n",data);
            rear -- ;
        }
    
}

int main()
{
    delete_from_rear();
    delete_from_rear();
    delete_from_rear();

}