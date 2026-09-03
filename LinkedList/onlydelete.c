#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *deletefrombeg ( struct node *head)
{
    struct node *temp ; 

    if (head == NULL)
    {
        printf("List is empty after deletion.\n");
        return head ; 

    }

    

    temp = head ;
    head = temp ->next ;
    free(temp);
    return head ; 

    
    
}

int main()
{
    struct node *head = NULL;

    head = deletefrombeg(head);

    return 0;
}