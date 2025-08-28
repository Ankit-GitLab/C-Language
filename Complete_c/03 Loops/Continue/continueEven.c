#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0) // Even 2 4 6 .... 100 

        {
            continue;//continue ke bad jo kuch rahe gaya use skip kar raha ga aur dusra line ko print kara ga
            printf("Hello Ankit");
        }
        printf("%d ", i);
       
    }
    return 0;
}