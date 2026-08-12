// program for insertion at the end of singly linked list 

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// Function to insert element at the end
struct node *insertattheend(struct node *head)
{
    struct node *newnode, *temp;

    // Memory allocation
    
    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory Not Allocated\n");
        return head;
    }

    // Input data

    printf("Enter Data: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    // If linked list is empty
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        // Move to the last node
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        // Connect new node at the end
        temp->next = newnode;
    }

    return head;
}

int main()
{
    struct node *head = NULL;

    head = insertattheend(head);
    head = insertattheend(head);
    head = insertattheend(head);

    // Display linked list
    struct node *temp = head;

    printf("\nLinked List: ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}