#include <stdio.h>

int main()
{
    double input;
    printf("Hello much money do you have in your pocket? ");
    scanf("%lf", &input);

    printf("The amount of money in your pockets is $ %.2lf", input);
    return 0;
}
