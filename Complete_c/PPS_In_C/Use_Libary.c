#include <stdio.h>  
#include <math.h>    

int main() {
    double number, base, exponent;

    printf("Enter a number to find its square root : ");
    scanf("%lf", &number); 
    printf("Square root of %.2lf is %.2lf\n", number, sqrt(number)); 

    printf("\nEnter a number to find its log value : ");
    scanf("%lf", &number); 
    printf("Log value (natural log) of %.2lf is %.2lf\n", number, log(number));

    
    printf("\nEnter base: ");
    scanf("%lf", &base); 
    printf("Enter exponent: ");
    scanf("%lf", &exponent);
    printf("%.2lf raised to the power %.2lf is %.2lf\n", base, exponent, pow(base, exponent)); 

    return 0;
}
