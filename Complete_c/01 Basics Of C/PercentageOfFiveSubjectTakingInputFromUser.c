#include <stdio.h>
int main()
{
    int Math, Physics, Chemistry, English, Hindi;
    printf("MATH MARKS : ");
    scanf("%d", &Math);
    printf("PHYSICS MARKS : ");
    scanf("%d", &Physics);
    printf(" CHEMISTRY MARKS : ");
    scanf("%d", &Chemistry);
    printf("ENGLISH MARKS : ");
    scanf("%d", &English);
    printf("HINDI MARKS : ");
    scanf("%d", &Hindi);

    float Percentage = (Math + Physics + Chemistry + English + Hindi) / 5;
    printf("THE PERCENTAGE OF FIVE SUBJECT : %f", Percentage);
    return 0;
}