// insert three numbers using singly linked list 

#include <stdio.h>
#include <stdlib.h>

// formation of structure 

struct node
{
    int data;
    struct node *next;
};

// making function 

struct node *insert_at_beginning(struct node *head)
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("MEMORY NOT ALLOCATED\n");
        return head;
    }

    printf("Enter Data: ");
    scanf("%d", &newnode->data);

    newnode->next = head;
    head = newnode;

    return head;
}

int main()
{
    struct node *head = NULL, *temp;

    head = insert_at_beginning(head);
    head = insert_at_beginning(head);
    head = insert_at_beginning(head);

    temp = head;

    while (temp != NULL)
    {
        printf("Inserted value = %d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}