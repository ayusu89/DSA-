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
int main()
{
    push(10);
    push(15);
    push(20);
    return 0;
}