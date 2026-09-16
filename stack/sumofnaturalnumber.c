#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}

int main()
{
    int n, result;

    printf("Enter a natural number upto which you want to add : ");
    scanf("%d", &n);

    result = sum(n);

    printf("Sum = %d", result);

    return 0;
}
