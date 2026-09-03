#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *next ;
    int data ;
};
struct node *deletefromend (struct node *head)
{
    struct node *temp , *prev ;

    // check if the list is empty 
    if(head == NULL)
    {
        printf("The list is empty\n") ;
        return head ;
    } 
    // If the list has only one node 

    if(head->next == NULL)
    {
        free(head);
        head = NULL ;
        printf("The last node has been deleted . \n");
        return head ;
    }

    // Traverse the list to find the second to last node 

    temp = head ;
    while (temp->next != NULL)
    {
        prev = temp ;
        temp = temp->next ;
    }

    // unlike the last node and free its memory 

    prev->next = NULL ;
    free (temp);
    printf("The last node has beem deleted \n");
    return head ;
}
int main ()
{
    struct node *head = NULL ;
    head = deletefromend (head);
    return 0;

}
