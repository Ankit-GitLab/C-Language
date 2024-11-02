#include <stdio.h>
int main()
{int n;
printf("Enter a number :");
scanf("%d",&n);
int a;
printf("Enter a number :");
scanf("%d",&a);

    for (int i = n; i <= a; i++)
    {
        char ch = (char)i;
        printf("%c --> ", ch);
        printf("%d\n", i);
    }
    return 0;
}