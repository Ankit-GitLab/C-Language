#include <stdio.h>
int main()
{
    int a = 100;
    for (int i = 1; a > 0; i++)
    { // ya positive deta hai
        printf("%d ", a);
        a = a - 3;
    }
    return 0;
}