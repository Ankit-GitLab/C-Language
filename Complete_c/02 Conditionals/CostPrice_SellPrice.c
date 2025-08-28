#include <stdio.h>
int main()
{ // main ka mlt code yaha se read karna start karga
    int CostPrice;
    printf("Enter cost price : ");
    scanf("%d", &CostPrice);
    int SellPrice;
    printf("Enter selling price : ");
    scanf("%d", &SellPrice);

    if (SellPrice > CostPrice)
    { // if--> check karta hai kya (sp>cp) big hai
        printf("Profit");
    }
    else if (CostPrice > SellPrice)
    { //<else if--> ka mlt ajar <if> nahi chala to <else if> chala ga
        printf("loss");
    }
    else
    { // else--> ka mlt ajar <if or else> if nahi chale to <else> chala ga
        printf("no profit , no loss");
    }
    return 0;
}