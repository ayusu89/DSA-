#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insertatend(struct node *head)
{
    struct node *temp, *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("MEMORY NOT ALLOCATED!\n");
        return head;
    }

    printf("Enter Data: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    // If list is empty
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        // Go to the last node
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        // Connect new node to last node
        temp->next = newnode;
    }

    return head;
}

int main()
{
    struct node *temp;
    struct node *head = NULL;

    head = insertatend(head);
    head = insertatend(head);
    head = insertatend(head);

    // Display linked list
    printf("\nLinked List:\n");

    temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}