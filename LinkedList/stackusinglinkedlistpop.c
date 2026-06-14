#include<stdio.h>
#include<stdlib.h>
struct node 
{
    struct node *next;
    int data;
};
struct node *top = NULL;
void push (int value)
{

    struct node *newnode  , *top;
    newnode = (struct node *)malloc (sizeof (struct node));
    if(newnode == NULL )
    {
        printf("MEMORY NOT ALLOCATED \n");
        return ;
    }
    newnode->data = value ;
    newnode->next=top ;
    top=newnode;

    printf("%d->" , value);
}

void pop ()
{
    struct node  *top ,*temp;
    if(top==NULL)
    {
        printf("Stack Underflow\n");
        return;
    }
    temp = top;
    printf(" \n %d popped from the stack \n", top->data);
    top = temp->next;
    free (temp);
}
int main()
{
    push(10);
    push(15);
    push(20);
    pop();
    pop();
    pop();
    pop();
    
    return 0;
}