#include <stdio.h>
int main()
{
    int A = 5, B, C;
    B = A = 15;
    C = A > 15;
    printf("\na=%d b=%d c=%d", A, B, C);
    return 0;
}