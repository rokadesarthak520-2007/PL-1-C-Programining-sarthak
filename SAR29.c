#include <stdio.h>

void areaTriangle()
{
    float base, height, area;

    printf("Enter base: ");
    scanf("%f", &base);

    printf("Enter height: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("Area of Triangle = %f", area);
}

int main()
{
    areaTriangle();

    return 0;
}
