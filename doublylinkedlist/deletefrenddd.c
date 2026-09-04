#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

// Function to delete from the end
struct node *deleteFromEnd(struct node *head)
{
    struct node *temp;

    // Check if list is empty
    if (head == NULL)
    {
        printf("The list is empty. Nothing to delete.\n");
        return head;
    }
    temp = head;

    // Move temp to the last node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // If there is only one node
    if (temp->prev == NULL)
    {
        head = NULL;
    }
    else
    {
        // Make the previous node the last node
        temp->prev->next = NULL;
    }

    // Delete the last node
    free(temp);

    printf("Node deleted from the end.\n");

    return head;
}

int main()
{
    struct node *head = NULL;

    // Delete from end
    head = deleteFromEnd(head);

    return 0;
}