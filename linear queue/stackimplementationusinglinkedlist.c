#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

// Push
void push(int data)
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->next = top;
    top = newnode;
}

// Pop
void pop()
{
    struct node *temp;

    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    temp = top;
    top = top->next;
    free(temp);
}

// Display
void display()
{
    struct node *temp = top;

    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    printf("Stack before pop: ");
    display();

    pop();

    printf("\nStack after pop: ");
    display();

    return 0;
}