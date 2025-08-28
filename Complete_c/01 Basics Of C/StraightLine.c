#include <stdio.h>
int main()
{
    double X1, Y2, Y1, X2, X3, Y3, M2, M1;
    printf("Enter y2 :");
    scanf("%lf", &Y2);
    printf("Enter y1 :");
    scanf("%lf", &Y1);
    printf("Enter x2 :");
    scanf("%lf", &X2);
    printf("Enter x1 :");
    scanf("%lf", &X1);
    printf("Enter y3 :");
    scanf("%lf", &Y3);
    printf("Enter x3 :");
    scanf("%lf", &X3);
    M1 = (Y2 - Y1) / (X2 - X1);
    printf(" slope (AB) : %lf\n ", M1);
    M2 = (Y3 - Y2) / (X3 - X2);
    printf(" slope (BC) : %lf ", M2);
    return 0;
}
