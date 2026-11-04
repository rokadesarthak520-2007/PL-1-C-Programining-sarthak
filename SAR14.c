#include <stdio.h>

int main()
{
    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d\n", num);

    while (i <= 10)
    {
        printf("%d * %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}
