
#include <stdio.h>
#include <string.h>   // Header file for string functions

int main()
{
    char str1[100], str2[100], str3[100];

    printf("\nEnter First String: ");
    scanf("%s", str1);

    printf("\nEnter Second String: ");
    scanf("%s", str2);

    // 1) Copy one string into another
    strcpy(str3, str1);
    printf("\nCopied String: %s", str3);

    // 2) Reverse the first string
    printf("\nReverse of First String: %s", strrev(str1));

    // 3) Find the length of both strings
    printf("\nLength of First String: %d", strlen(str1));
    printf("\nLength of Second String: %d", strlen(str2));

    // 4) Compare two strings
    if (strcmp(str1, str2) == 0)
    {
        printf("\nBoth Strings are Equal");
    }
    else
    {
        printf("\nBoth Strings are Not Equal");
    }

    // 5) Concatenate second string to first string
    strcat(str1, str2);
    printf("\nConcatenated String: %s", str1);

    return 0;
}
