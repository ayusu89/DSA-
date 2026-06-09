#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert_at_beginning(struct node *head)
{
    struct node *newnode ;
    

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
   
    //to delete from the beginning

    struct node *delete_from_beginning (struct node *head)
    {
        struct node *temp;
        if (head == NULL)
    {
        printf("List is empty\n");
        return head ;
    }
    else 
    {
        temp = head ;
        printf("Deleted value = %d\n", temp->data);

        head = head -> next;
        free(temp);

        return head ;
    }
}


int main()
{
    struct node *head = NULL;
    

    
       head = insert_at_beginning(head);
       head = insert_at_beginning(head);
       head = insert_at_beginning(head);
       head = delete_from_beginning(head);
       head= delete_from_beginning(head);
        head = delete_from_beginning(head);
       head = delete_from_beginning(head);

       if (head != NULL)
        {
            printf("Inserted value = %d\n", head->data);
        }
        else
        {
            printf("List is empty\n");
        }
       
    return 0;
}