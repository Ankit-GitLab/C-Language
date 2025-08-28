#include <stdio.h>
int main()
{
    float Radius;
    printf("Enter radius : ");
    scanf("%f", &Radius);
    float pi = 3.1415;
    float Area = pi * Radius * Radius;
    printf("The area of a circle is : %f", Area);
    return 0;
}