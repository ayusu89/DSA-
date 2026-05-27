#include<stdio.h>
#define max 5
int queue [max];
int front = -1;
int rear = -1;
void insert_at_front (int data)
{
    // check if the queue is full or not

    if((front == 0 && rear == max-1) || (front == rear + 1))
        {
            printf("Queue is full . Cannot insert more than this \n");

        }

    // check if the queue is empty or not 

    if (front == -1)
        {
            front = 0;
            rear = 0;
             
        }

     // check if the front is at beginning if so then change it into the last position 
     
     else if (front == 0)
        {
            front = max-1;
            
        }
     

     // otherwise simply decrement function


     else
        {
          front -- ;
           
        }


     queue[front] = data ;
     printf("Inserted elements are : %d \n",data);
}

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
    
        insert_at_front (10);
        insert_at_front (20);
        insert_at_front (30);
        
        delete_from_rear();
        delete_from_rear();
        delete_from_rear();
        delete_from_rear();

        return 0;
    
    

}