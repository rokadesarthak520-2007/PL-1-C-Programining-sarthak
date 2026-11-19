
#include <stdio.h>

// Function to calculate string length
int fun_len(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

// Function to reverse the string
void fun_rev(char str[])
{
    int i;

    for (i = fun_len(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    char str[100];
    int length;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    length = fun_len(str);
    printf("\nLength of the string = %d", length);

    printf("\nReverse of the string = ");
    fun_rev(str);

    return 0;
}
