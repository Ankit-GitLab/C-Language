#include <stdio.h>
int main()
{
    int RamAge, ShayamAge, AjayAge;
    printf("Enter ram age : ");
    scanf("%d", &RamAge);
    printf("Enter shayam  age : ");
    scanf("%d", &ShayamAge);
    printf("Enter ajay age :");
    scanf("%d", &AjayAge);
    if (RamAge > ShayamAge && RamAge > AjayAge)
    {
        printf("ram is youngest\n");
    }
    else if (ShayamAge > RamAge && ShayamAge > AjayAge)
    {
        printf("shayam is youngest\n");
    }
    else if (AjayAge > ShayamAge && AjayAge > RamAge)
    {
        printf(" ajay is youngest\n");
    }
    else
        printf("Two or Three age are same");
    return 0;
}