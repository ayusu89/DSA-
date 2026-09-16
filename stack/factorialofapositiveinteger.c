#include <stdio.h>

long int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int num;
    long int result;

    printf("Enter the number: ");
    scanf("%d", &num);

    result = fact(num);

    printf("Factorial = %ld\n", result);

    return 0;
}
