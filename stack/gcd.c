#include<stdio.h>
 
// function to calculate gcd using recursion

int gcd (int a , int b)
{
    if (b==0)
    {
        return a ;
    }
    else
    {
        return gcd (b , a%b);
    }
    return 0 ;
}
int main ()
{
   int result = gcd (10 , 20);

    printf("%d",result );

    return 0 ;
}