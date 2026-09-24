#include <stdio.h>

int main()
{
    int num;
    printf("Even your number:");
    scanf("%d", &num);

    if(num%2 == 0)
    {
        printf("The number is Even.");
    }
    else
    {
        printf("The number is odd.");
    }

    return 0;
}