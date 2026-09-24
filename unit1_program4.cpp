#include <stdio.h>

int main()
{
    float radius, area;

    printf("\n Enter the radius of the circle : ");
    scanf("%f", &radius);
    area = (3.14 * radius * radius);
    printf("\n Area of circle = %f", area);

    return 0;
}