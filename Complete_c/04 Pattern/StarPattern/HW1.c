#include <stdio.h>
int main()
{
    int Rows, Columns;
    printf("Enter number of rows :");
    scanf("%d", &Rows);
    printf("Enter number of columns :");
    scanf("%d", &Columns);
    for (int i = 1; i <= Columns; i++)
    {
        for (int i = 1; i <= Rows; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}