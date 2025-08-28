#include <stdio.h>
int main()
{
    int Num, Reverse = 0;
    printf("Enter a number : ");
    scanf("%d", &Num); // Num = 1234
    while (Num > 0)
    {
        Reverse = Reverse * 10;
        Reverse = Reverse + (Num % 10);
        Num = Num / 10;
    }

    printf("The number is reversed : %d", Reverse); // Reverse = 4321

    return 0;
}