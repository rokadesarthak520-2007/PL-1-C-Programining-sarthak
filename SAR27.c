#include <stdio.h>

int factorial(int n)
{
    int fact = 1, i = 1;

    do
    {
        fact = fact * i;
        i++;
    } while(i <= n);

    return fact;
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = factorial(n);

    printf("Factorial of %d = %d", n, result);

    return 0;
}
