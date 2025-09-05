// Write a C program to compute the perimeter and area of a circle with a given radius.

#include <stdio.h>
#include <math.h>

int main (void)
{
    double radius, circumference, area;
    printf("What is the radius of the circle you want to analyze? \n");
    scanf("%lf", &radius);
    circumference = radius * 2 * M_PI;
    printf("This is the circumference: %.8lf\n", circumference);
    area = radius * radius * M_PI;
    printf("This is the area: %.8lf\n", area);
    return 0;
}
