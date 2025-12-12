#include <stdio.h>
int main()
{
    float X = 5.7;
    int Y = X;
    printf("%d\n", Y); // ajar koi 7.5 mei sirf 7 print karna ho to
    float Z = X - Y;   // ajar koi 7.5 mei srif 0.5 print karna ho to
    printf("%f", Z);
    return 0;
}
