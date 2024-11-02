#include <stdio.h>
int main()
{
    int Marks[10] = {95, 12, 94, 34, 29, 36, 57, 1, 5, 9};
    for (int i = 0; i < 10; i++)
    {
        if (Marks[i] < 35)
        {
            printf("%d ", i);
        }
    }
    return 0;
}