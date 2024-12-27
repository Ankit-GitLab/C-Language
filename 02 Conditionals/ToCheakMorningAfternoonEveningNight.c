#include <stdio.h>
int main()
{
    float N;
    printf("Enter time To Cheak Morning, Afternoon, Evening, Night : ");
    scanf("%f", &N);
    if (N <= 11)
    {
        printf("good morning");
    }
    else if (N <= 17)
    {
        printf("good afternoon");
    }
    else if (N <= 22)
    {
        printf("good Evening");
    }
    else
    {
        printf("good night");
    }
    return 0;
}