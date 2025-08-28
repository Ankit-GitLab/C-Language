#include <stdio.h>

void India();

int main()
{
    India(); // calling india
    return 0;
}
void India()
{
    printf("you are in india\n");
    // Australia(); // calling australia
    India();
}
