#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// Function to insert at beginning
struct node *insertatbeginning(struct node *head)
{
    struct node *newnode;

    // Memory allocation
    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory not allocated\n");
        return head;
    }

    // Input data
    printf("Enter data: ");
    scanf("%d", &newnode->data);

    // Link new node to current head
    newnode->next = head;

    // Make new node the new head
    head = newnode;

    return head;
}

int main()
{
    struct node *head = NULL;

    head = insertatbeginning(head);

    printf("Node inserted successfully.");

    return 0;
}