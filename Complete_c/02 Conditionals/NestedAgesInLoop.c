#include <stdio.h> //# ka mlt yha se code read karana start karata hai
int main()
{ // main ka mlt perprosscesera
    int RamAge, ShyamAge, AjayAge;
    printf("Enter the age of ram : ");
    scanf("%d", &RamAge);
    printf("Enter the age of shyam : "); // & ka mlt address of
    scanf("%d", &ShyamAge);
    printf("Enter the age of ajay : ");
    scanf("%d", &AjayAge);
    if (RamAge > ShyamAge)
    {
        if (RamAge > AjayAge)
            printf("%d ram is younger ", RamAge);
        else // ramAge<ajayAge
            printf("%d ajay is younger", AjayAge);
    }
    else
    {
        if (ShyamAge > AjayAge)
            printf("%d shaym is younger", ShyamAge);
        else // ajayAge>shyamAge
            printf("%d ajay is younger", AjayAge);
    }
    return 0;
}