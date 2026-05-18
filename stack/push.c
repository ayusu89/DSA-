#include<stdio.h>
#define max 5
int top = -1;
int stack [max];
int push (int val)
{
    if(top == max -1 )
    {
        printf("Stack Overflow \n");
    }
    else
    {
        top = top +1;
        stack [top] = val;
        printf("%d pushed in the stack \n", val);
    }
}
int main ()
{
    push (1);
    push (2);
    push (3);
    push (4);
    return 0;
}