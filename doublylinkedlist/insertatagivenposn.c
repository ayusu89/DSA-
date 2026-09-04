#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

// Insert node after a given position
struct node *insertafgpos(struct node *head)
{
    struct node *newnode , *temp;
    int pos, i;

    printf("Enter position: ");
    scanf("%d", &pos);

    temp = head;

    // Check if list is empty
    if (head == NULL)
    {
        printf("List is empty.\n");
        return head;
    }

    // Go to the given position
    for (i = 1; i < pos-1; i++)
    {
        if (temp == NULL)
        {
            printf("Invalid position.\n");
            return head;
        }

        temp = temp->next;
    }

    // Check if position is valid
    if (temp == NULL)
    {
        printf("Invalid position.\n");
        return head;
    }

    // Create new node
    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory allocation failed.\n");
        return head;
    }

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    // Connect new node
    newnode->next = temp->next;
    newnode->prev = temp;

    // Connect next node to new node
    if (temp->next != NULL)
    {
        temp->next->prev = newnode;
    }

    // Connect temp to new node
    temp->next = newnode;

    return head;
}

int main()
{
    struct node *head = NULL;
    struct node *temp;
    struct node *newnode;

    // Creating first node
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 10;
    newnode->prev = NULL;
    newnode->next = NULL;
    head = newnode;

    // Creating second node
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 20;
    newnode->prev = head;
    newnode->next = NULL;
    head->next = newnode;

    // Creating third node
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 30;
    newnode->prev = head->next;
    newnode->next = NULL;
    head->next->next = newnode;

    // Insert after a given position
    head = insertafgpos(head);

    // Display the list
    temp = head;

    printf("Doubly Linked List: ");

    while (temp != NULL)
    {
        printf("%d<->", temp->data);
        temp = temp->next;
    }
    printf ("NULL \n");

    return 0;
}