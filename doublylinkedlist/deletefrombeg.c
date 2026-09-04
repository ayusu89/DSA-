#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

// Function to delete a node from the beginning

struct node *deletefrombeginning(struct node *head)
{
    struct node *temp;

    // Check if the list is empty
    if (head == NULL)
    {
        printf("The list is empty . Nothing to delete.\n");
        return head;
    }

    // Point temp to the first node
    temp = head;

    // Move head to the second node
    head = head->next;

    head->prev = NULL;
    

    // Free the old first node
    free(temp);

    printf("Node deleted from the beginning.\n");

    return head;
}

int main()
{
    struct node *head = NULL;
    // Delete from beginning

    head = deletefrombeginning(head);

    return 0;
}
