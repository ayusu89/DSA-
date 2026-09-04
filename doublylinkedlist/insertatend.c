#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *prev;
    struct node *next;
};

// Function to insert a node at the end of a doubly linked list

struct node *insertatend(struct node *head)
{
    struct node *newnode, *temp; 
 
    // Allocate memory for the new node

    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Memory allocation failed.\n");
        return head; 
    }

    //  Input and set  new node pointers

    printf("Enter Data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    // Handle empty list case
    if (head == NULL)
    {
        newnode->prev = NULL;
        return newnode; // newnode becomes the new head
    }

    // Traverse to the last node
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Update pointers for insertion at the end
    temp->next = newnode;
    newnode->prev = temp;

    return head;
}

int main()
{
    struct node *head = NULL;

    // Insert elements
    head = insertatend(head);
    head = insertatend(head);

    // Print list from head to tail to verify
    struct node *temp = head;
    printf(" \n Doubly Linked List: ");
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    
    printf(" NULL \n");

    return 0;
}