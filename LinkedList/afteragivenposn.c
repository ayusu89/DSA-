#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// Function to insert a node after a given position
struct node *insertaftergivennode(struct node *head)
{
    struct node *newnode, *temp;
    int pos;
    int i = 1;
    int count = 0;

    // Count the nodes in the list
    temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    // Get position from user
    printf("Enter the position after which to insert the new node: ");
    scanf("%d", &pos);

    // Validate position
    if (pos < 1 || pos > count)
    {
        printf("Invalid Position. Must lie between 1 and %d\n", count);
        return head;
    }

    // Allocate memory
    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return head;
    }

    // Get data
    printf("Enter data for the new node: ");
    scanf("%d", &newnode->data);

    // Traverse to the given position
    temp = head;

    while (i < pos)
    {
        temp = temp->next;
        i++;
    }

    // Insert new node after temp
    newnode->next = temp->next;
    temp->next = newnode;

    printf("Node inserted successfully\n");

    return head;
}

int main()
{
    struct node *head = NULL;
    struct node *newnode, *temp;

    // Creating initial linked list
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 10;
    newnode->next = NULL;
    head = newnode;

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 20;
    newnode->next = NULL;
    head->next = newnode;

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 30;
    newnode->next = NULL;
    head->next->next = newnode;

    // Insert after given position
    head = insertaftergivennode(head);

    // Display linked list
    printf("Linked List:\n");

    temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}