#include <stdio.h>

int sum (int n);

int main (void)
{
    int n, result;
    printf("input: ");
    scanf("%d", &n);

    result = sum(n);

    printf("%d", result);
}

int sum (int n)
{
    if (n == 0)
    {
    return n;
    }
    else
    {
    return n + sum(n-1);
    }
}
