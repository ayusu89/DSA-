#include<stdio.h>
#include<stdlib.h>

struct node
 { 
    int data; 
    struct node *next; 
 }; 
 
// Function to delete a node after a given position in the linked list 
struct node* deleteafterposition(struct node *head)
 { 
    struct node *temp, *prev, *nextnode; 
    int pos, i = 1; 
 
    // Check if the list is empty 
    if (head == NULL)
     { 
        printf("The list is empty.\n"); 
        return head; 
     } 
 
    // Input the position to delete 
    printf("Enter the position to delete: "); 
    scanf("%d", &pos); 
 
    // If the position is the first node 
    if (pos == 1) 
    { 
        temp = head; 
        head = head->next; // Move head to the next node 
        free(temp); // Free the memory of the old head 
        printf("Node at position 1 deleted.\n"); 
        return head; 
     } 
 
    temp = head; 
 
    // Traverse to the node just before the desired position 
    while (i < pos) 
    { 
        temp = temp->next; 
        i++; 
    } 
 
    // Delete the node after a given  position 
    nextnode = temp->next; 
    temp->next = nextnode->next; // Unlink the node 
    free(nextnode); // Free the memory of the deleted node 
    printf("Node at position %d deleted.\n", pos); 
 
return head; 
}
int main ()
{
    struct node *head = NULL ; 
     head =  deleteafterposition (head);
     return 0 ;
    

}