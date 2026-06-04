#include <stdio.h>
#include <stdlib.h>

struct node
 {
    int data;
    struct node *next;
 };

// Function name corrected with underscores instead of hyphens
    struct node *insert_at_end(struct node *head) {
    struct node *newnode, *temp;

    // Allocate memory for the new node
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
     {
        printf("Memory allocation failed \n");
        return head;
     }

    // Assign data and correctly set next to NULL
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL; // Fixed: Use '=' for assignment, not '=='

    // Case 1: The list is empty
    if (head == NULL)
     {
        head = newnode;
     } 
    // Case 2: The list already has nodes (traverse to find the end)
    else 
    {
        temp = head;
        while (temp->next != NULL)
         {
            temp = temp->next; // Move to the next node
         }
        temp->next = newnode; // Link the old last node to the new node
    }

    return head;
}

// Simple function to print the list and verify the logic
void print_list(struct node *head)
 {
    struct node *temp = head;
     while (temp != NULL)
     {
        printf("%d -> ", temp->data);
        temp = temp->next;
     } 
    printf("NULL\n");
}

    int main()
     {
    struct node *head = NULL;

    // Insert 3 elements to test the end insertion
    head = insert_at_end(head);
    head = insert_at_end(head);
    head = insert_at_end(head);

    printf("Linked List content: ");
    print_list(head);

    return 0;
}
