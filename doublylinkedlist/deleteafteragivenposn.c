#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

int main()
 {
    struct node *head = NULL, *temp, *newnode, *prev;
    int n, i, pos;

    // Create the linked list
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
     {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data for node %d: ", i);
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head == NULL) 
        {
            head = newnode;
        } else 
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
                

            temp->next = newnode;
        }
    }

    // Display original list
    printf("\nOriginal list: ");
    temp = head;
    while (temp != NULL)
     {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    // Enter position
    printf("\nEnter position after which node is to be deleted: ");
    scanf("%d", &pos);

    // Move to the given position
    temp = head;
    for (i = 1; i < pos && temp != NULL; i++)
    {
          temp = temp->next;
    }
      

    // Check whether deletion is possible
    if (temp == NULL || temp->next == NULL) 
    {
        printf("Deletion not possible.");
    }
     else 
    {
        prev = temp->next;
        temp->next = prev->next;
        free(prev);

        printf("Node deleted successfully.");
    }

    // Display updated list
    printf("\nUpdated list: ");
    temp = head;
    while (temp != NULL) 
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}