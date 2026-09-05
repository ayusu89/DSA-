#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* create()
 {
    struct node *head = NULL, *newnode, *tail = NULL;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;
            tail = newnode;
        }
        else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    tail->next = head;

    return head;
}

void display(struct node *head) 
{
    struct node *temp = head;

    while(temp->next != head) 
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("%d -> HEAD", temp->data);
}

int main()
 {
    struct node *head;

    head = create();
    display(head);

    return 0;
}
