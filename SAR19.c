
#include <stdio.h>

int main()
{
    int arr[5], i, sum = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    printf("\nSum of all array elements = %d", sum);

    return 0;
}
