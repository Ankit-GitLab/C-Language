#include <stdio.h>
int main()
{
    int N; // dabba ban gaya
    printf("Enter a number To Check Odd or Even : ");
    scanf("%d", &N);
    if (N == 0)
    { // 6  6/2-0   0==0 true
        printf("0 is neither odd nor even ");
    }
    else if (N % 2 == 0)
    { // 6  6/2-0   0==0 true
        printf("Even number");
    }
    else if ((N + 1) % 2 == 0)
    { // 7  7/2-1 1!=0   true // n%2!=0
        printf("Odd number");
    }

    return 0;
}
