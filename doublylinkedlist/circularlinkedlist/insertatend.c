#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL, *tail = NULL;

// Insert at end
void insertAtEnd()
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    if (tail == NULL)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
}

// Display
void display()
{
    struct node *temp = tail->next;

    while (temp != tail)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("%d -> HEAD", temp->data);
}

int main()
{
    insertAtEnd();
    insertAtEnd();
    insertAtEnd();

    display();

    return 0;
}
