#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

// Function to delete node at given position
struct node *deleteAtPosition(struct node *head)
{
    struct node *temp;
    int pos, i;

    // Check empty list
    if (head == NULL)
    {
        printf("List is empty\n");
        return head;
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    // Check invalid position
    if (pos <= 0)
    {
        printf("Invalid position\n");
        return head;
    }

    temp = head;

    // Traverse to the required position
    for (i = 1; i < pos && temp != NULL; i++)
    {
        temp = temp->next;
    }

    // Position does not exist
    if (temp == NULL)
    {
        printf("Invalid position\n");
        return head;
    }

    // Delete first node
    if (temp->prev == NULL)
    {
        head = temp->next;

        if (head != NULL)
        {
            head->prev = NULL;
        }
    }
    else
    {
        // Connect previous node to next node
        temp->prev->next = temp->next;

        // Connect next node to previous node
        if (temp->next != NULL)
        {
            temp->next->prev = temp->prev;
        }
    }

    free(temp);

    printf("Node deleted successfully\n");

    return head;
}

int main()
{
    struct node *head;

    // head is assumed to contain an existing doubly linked list

    head = deleteAtPosition(head);

    return 0;
}
