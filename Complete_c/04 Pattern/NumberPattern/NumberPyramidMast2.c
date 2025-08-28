#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines : ");
    scanf("%d", &n);
    int nnb=n;
    int nsp=1;
    for(int m=1; m<=n*2+1; m++){  // number for first line 
        printf("%d ",m);
    }
    printf("\n");
    for(int i=1; i<=n; i++){  //outer loop
        int a=1;
        for(int j=1; j<=nnb; j++){  //second line number for left
            printf("%d ",a);
            a++;
        }
        
        for(int k=1; k<=nsp; k++){  // second line space for middle
            printf("  ");
            a++;
        }
         for(int j=1; j<=nnb; j++){  // second line number for right
            printf("%d ",a);
            a++;
        }
        nnb--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}