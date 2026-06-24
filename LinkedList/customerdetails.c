#include <stdio.h> 

#include <stdlib.h> 

  

struct ticket 

{ 

    int id; 

    char name[30]; 

    char issue[50]; 

}; 

  

struct node 

{ 

    struct ticket data; 

    struct node *next; 

}; 

  

struct node *front = NULL; 

struct node *rear = NULL; 

  

// Add Ticket 

void enqueue() 

{ 

    struct node *newnode; 

  

    newnode = (struct node *)malloc(sizeof(struct node)); 

  

    printf("\nEnter Ticket ID: "); 

    scanf("%d", &newnode->data.id); 

  

    printf("Enter Customer Name: "); 

    scanf("%s", newnode->data.name); 

  

    printf("Enter Issue: "); 

    scanf("%s", newnode->data.issue); 

  

    newnode->next = NULL; 

  

    if(front == NULL) 

    { 

        front = rear = newnode; 

    } 

    else 

    { 

        rear->next = newnode; 

        rear = newnode; 

    } 

  

    printf("\nTicket Added Successfully.\n"); 

} 

  

// Resolve Ticket 

void dequeue() 

{ 

    struct node *temp; 

  

    if(front == NULL) 

    { 

        printf("\nNo Pending Tickets.\n"); 

        return; 

    } 

  

    temp = front; 

  

    printf("\nTicket Resolved\n"); 

    printf("Ticket ID : %d\n", temp->data.id); 

    printf("Customer  : %s\n", temp->data.name); 

    printf("Issue     : %s\n", temp->data.issue); 

  

    front = front->next; 

  

    if(front == NULL) 

        rear = NULL; 

  

    free(temp); 

} 

  

// View Next Ticket 

void peek() 

{ 

    if(front == NULL) 

    { 

        printf("\nNo Pending Tickets.\n"); 

        return; 

    } 

  

    printf("\nNext Ticket\n"); 

    printf("Ticket ID : %d\n", front->data.id); 

    printf("Customer  : %s\n", front->data.name); 

    printf("Issue     : %s\n", front->data.issue); 

} 

  

// Display All Tickets 

void display() 

{ 

    struct node *temp; 

  

    if(front == NULL) 

    { 

        printf("\nNo Pending Tickets.\n"); 

        return; 

    } 

  

    temp = front; 

  

    printf("\nPending Tickets\n"); 

  

    while(temp != NULL) 

    { 

        printf("---------------------\n"); 

        printf("Ticket ID : %d\n", temp->data.id); 

        printf("Customer  : %s\n", temp->data.name); 

        printf("Issue     : %s\n", temp->data.issue); 

  

        temp = temp->next; 

    } 

} 

  

// Count Tickets 

void count() 

{ 

    int c = 0; 

    struct node *temp = front; 

  

    while(temp != NULL) 

    { 

        

        temp = temp->next; 

    } 

  

    printf("\nTotal Pending Tickets = %d\n", c); 

} 

  

int main() 

{ 

    int choice; 

  

    do 

    { 

        printf("\n===== Customer Support Ticket Router =====\n"); 

        printf("1. Add Ticket\n"); 

        printf("2. Resolve Ticket\n"); 

        printf("3. View Next Ticket\n"); 

        printf("4. Display All Tickets\n"); 

        printf("5. Count Tickets\n"); 

        printf("6. Exit\n"); 

  

        printf("Enter Choice: "); 

        scanf("%d", &choice); 

  

        switch(choice) 

        { 

            case 1: 

                enqueue(); 

                break; 

  

            case 2: 

                dequeue(); 

                break; 

  

            case 3: 

                peek(); 

                break; 

  

            case 4: 

                display(); 

                break; 

  

            case 5: 

                count(); 

                break; 

  

            case 6: 

                printf("\nProgram Ended.\n"); 

                break; 

  

            default: 

                printf("\nInvalid Choice.\n"); 

        } 

  

    }while(choice != 6); 

  

    return 0; 

} 
 
