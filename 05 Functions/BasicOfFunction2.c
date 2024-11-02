#include <stdio.h>
void England()
{
    printf("you are in england\n");
    return;
}
void Australia()
{
    printf("you are in australia\n");
    England(); // calling england
    return;
}
void India()
{
    printf("you are in india\n");
    Australia(); // calling australia
}
int main()
{
    India(); // calling india
    return 0;
}
