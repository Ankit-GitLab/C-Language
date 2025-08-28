#include <stdio.h>
int main()
{
    int Length, Breath, Perimeter, Area;
    printf("Enter breath  : ");
    scanf("%d", &Breath);
    printf("Enter length  : ");
    scanf("%d", &Length);
    Area = Breath * Length;
    printf("Area of a rectangle : %d", Area);
    Perimeter = 2 * (Length + Breath);
    printf("\nRectangle of perimeter :  %d", Perimeter);
    if (Area > Perimeter)
    {
        printf("\nArea is greater than perimeter :");
    }
    else if (Area < Perimeter)
    {
        printf("\nArea is no greater than perimeter :");
    }
    else
        printf("\nBoth area (%d) and perimeter (%d) are same", Area, Perimeter);

    return 0;
}