#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
// Function to delete node from given position
struct node *deleteAtPosition( struct node *head)
{
    struct node *temp;
    int pos, i;

    if (head == NULL)
    {
        printf("List is empty\n");
        return head ;
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    // If position is invalid
    if (pos <= 0)
    {
        printf("Invalid position\n");
        return head;
    }

    temp = head;

    // Move temp to the node at given position
    for (i = 1; i < pos && temp != NULL; i++)
    {
        temp = temp->next;
    }

    // Position does not exist
    if (temp == NULL)
    {
        printf("Invalid position\n");
        return head ;
    }

    // If deleting the first node
    if (temp->prev == NULL)
    {
        head = temp->next;

        if (head != NULL)
            head->prev = NULL;
    }
    else
    {
        temp->prev->next = temp->next;

        if (temp->next != NULL)
            temp->next->prev = temp->prev;
    }

    free(temp);

    printf("Node deleted successfully\n");
    return head ;
}

int main()
{
    struct node *head = NULL ;
    head = deleteAtPosition(head);

    return 0;
}