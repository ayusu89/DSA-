#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert_at_beginning(struct node *head)
{
    struct node *newnode;
    

    newnode = (struct node *) malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory not allocated\n");
        return head;
    }
     
     printf("Enter Data: ");
     scanf("%d", &newnode->data);

     newnode->next = head;
     head = newnode;

     
   
    return head;
}

int main()
{
    struct node *head = NULL;
    

    
       head = insert_at_beginning(head);
       printf("Inserted value = %d\n", head->data);


    

   
    return 0;
}