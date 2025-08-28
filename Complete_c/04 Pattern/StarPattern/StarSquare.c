#include <stdio.h>
int main()
{
    int Columns;
    printf("Enter number of columns : ");
    scanf("%d", &Columns);
    int Rows;
    printf("Enter number of rows : ");
    scanf("%d", &Rows);
    for (int I = 1; I <= Columns; I++)
    {
        for (int I = 1; I <= Rows; I++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}