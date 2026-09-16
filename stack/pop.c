#include<stdio.h>
#define max 5
int stack[max] = {1,2,3,4,5};
int top = 4;
int pop()
{
    if (top == -1)
    {
        printf("Stack underflow \n");
    }
    else
    {
        int data = stack [top];

        top = top -1 ;
        
        printf("%d popped from the stack \n",data);
    }
}
int main()
{
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    return 0;
}