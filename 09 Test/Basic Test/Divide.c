#include <stdio.h>
int main() {
    int Divisor, Dividend;   // taking input integer
    float Quotient , Remainder;
    printf("Enter a dividend :");
    scanf("%d", &Dividend);
    printf("Enter a divisor :");
    scanf("%d", &Divisor);
     
    Quotient = Dividend / Divisor;
    Remainder = Dividend % Divisor;
    printf("Quotient : %f\n", Quotient);
    printf("Remainder : %f", Remainder);
    return 0;
}
