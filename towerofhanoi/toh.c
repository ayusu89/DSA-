#include<stdio.h>
void toh(int n , char source , char dest , char aux);
int main()
{
    int n;
    printf("Enter the number of disks : ");
    scanf("%d",&n);
    printf("The sequence of moves involved in the Tower of Hanoi are : \n");
    toh(n,'A','C','B');
    return 0;
}
void toh(int n , char source , char dest , char aux)
{
    if(n==1)
    {
        printf("Move disk 1 from %c to %c\n",source,dest);
        return;
    }
    toh(n-1,source,aux,dest);
    printf("Move disk %d from %c to %c\n",n,source,dest);
    toh(n-1,aux,dest,source);
}