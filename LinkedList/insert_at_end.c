#include <stdio.h>
#include <stdlib.h>

struct node
 {
    int data;
    struct node *next;
 };

// Function to insert at end
    struct node *insert_at_end(struct node *head) 
    {
    struct node *newnode, *temp;

    // Allocate memory for the new node
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
     {
        printf("Memory allocation failed \n");
        return head;
     }

    // Assigning the data to the new node 
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL; 
    

    // check if the list is empty
    if (head == NULL)
     {
        head = newnode;
     } 
   
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

// function to display
void display (struct node *head)
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

    // Insert 3 elements at end
    head = insert_at_end(head);
    head = insert_at_end(head);
    head = insert_at_end(head);

    printf("Linked List content: ");
    display(head);

    return 0;
}
