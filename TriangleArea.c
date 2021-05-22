#include <stdio.h>

int main()
{
    double height, base, area;
    printf("Enter Height ");
    scanf("%lf", &height);

    printf("Enter Base ");
    scanf("%lf", &base);

    // multiply height * base by 0.5
    area = height * base * 0.5;
    printf("The area of the triangle is %.2lf ", area);

    printf("The address of area of the triangle is: %p", area);
    return 0;

}
