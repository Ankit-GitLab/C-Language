#include <stdio.h>
int main()
{
    int
        x = 1;
    while (x == 1)
    {
        x = 1 - x;
        printf("\n%d", x);
    }
    return 0;
}