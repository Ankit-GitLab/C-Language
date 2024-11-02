#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0) //Odd 1 3 5 ...99

        {
            continue;//continue ke bad jo kuch rahe gaya use skip kar raha ga aur dusra line ko print kara ga
            printf("Hello Ankit");
        }
        printf("%d ", i);
       
    }
    return 0;
}