#include <stdio.h>
int main()
{
    int Num, Sum, Num1, Reverse = 0;
    printf("Enter a number : ");
    scanf("%d", &Num);
     Num1 = Num;
    while (Num != 0)
    {
        Reverse = Reverse * 10;
        Reverse = Reverse + (Num % 10);
        Num = Num / 10;
    }
        Sum = Reverse + Num1;

    printf("Sum is reverse and Num1 : %d", Sum);

    return 0;
}