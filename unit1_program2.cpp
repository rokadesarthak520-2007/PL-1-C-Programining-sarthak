#include <stdio.h>

int main()
{
    int rollnum;
    float per;
    char grade;

    printf("\nEnter student Roll Number : ");
    scanf("%d", &rollnum);

    printf("\nEnter student percentage : ");
    scanf("%f", &per);

    printf("\nEnter student Grade : ");
    scanf("%c", &grade);

    printf("\n--- student Information---\n");
    printf("\nRoll Number is : %d", rollnum);
    printf("\nPercentage is : %f", per);
    printf("\nGrade is : %c", grade);

    return 0;
}