#include<stdio.h>
#include<stdlib.h>
struct node
 { 
    int data; 
    struct node *next; 
}; 
 
// Function to insert a node after a given position 
struct node* insertAfterLocation(struct node *head)
 { 
    struct node *newnode, *temp; 
    int pos, i = 1, count = 0; 
 
    // Count total nodes in the list 
    temp = head; 
    while (temp != NULL)
     { 
        count++; 
        temp = temp->next; 
    } 
 
    // Allocate memory for the new node 
    newnode = (struct node *)malloc(sizeof(struct node)); 
    if (newnode == NULL) 
    { 
        printf("Memory allocation failed.\n"); 
        return head; 
    } 
 
    // Get position input from user 
    printf("Enter the position after which to insert the new node: "); 
    scanf("%d", &pos); 
 
    // Validate position 
    if (pos > count || pos < 0)
     { 
        printf("Invalid position. Must be between 0 and %d.\n", count); 
        free(newnode); 
        return head; 
    } 
 
    // Get data input for the new node 
    printf("Enter data for the new node: "); 
    scanf("%d", &newnode->data); 
 
    // If inserting at the end 
    if (pos == count)
     { 
        newnode->next = NULL; 
        temp = head; 
 
        // If list is empty 
        if (head == NULL)
         { 
            head = newnode; 
        } else 
        { 
            while (temp->next != NULL)
             { 
                temp = temp->next; 
            } 
            temp->next = newnode; 
        } 
    } 
    else 
    { 
    // Traverse to the given position 
        temp = head; 
        while (i < pos) 
        { 
            temp = temp->next; 
            i++; 
        } 
 
        // Insert the new node 
        newnode->next = temp->next; 
        temp->next = newnode; 
    } 
 
    printf("Node inserted successfully.\n"); 
    return head;
}


int main()
{
    struct node *head = NULL;

    head = insertAfterLocation(head);

    return 0;
}