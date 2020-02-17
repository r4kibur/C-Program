/*
 * C program to find the area of a circle, given the radius
 */
#include <stdio.h>
#include <math.h>
#define PI 3.142

int  main()
{
    float radius, area;

    printf("Enter the radius of a circle:");
    scanf("%f", &radius);
    area = PI * pow(radius, 2);
    printf("Area of a circle = %5.2f\n", area);
}
