#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

// Function to insert at the beginning of a doubly linked list

struct node *insertbegofd(struct node *head)
{
    struct node *newnode;
    
    // Create a new node

    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory not allocated!\n");
        return head;
    }

    // Take data for the new node

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    // Set the new node's pointers

    newnode->prev = NULL;
    newnode->next = head;

    // If the list is not empty, update the old head's prev

    if (head != NULL)
    {
        head->prev = newnode;
    }

    // Make the new node the head


    head = newnode;

    return head;
}

int main()
{
    struct node *head = NULL;

    head = insertbegofd(head);
    printf("Inserted node is: %d\n", head->data);
    return 0;
}
