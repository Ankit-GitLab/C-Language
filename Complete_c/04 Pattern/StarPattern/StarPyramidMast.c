#include<stdio.h>
int main (){
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    for(int a=1; a<=(n*2)+1; a++){ // star for first line 
            printf("* ");
    }
    printf("\n");
    for(int i=1; i<=n; i++){ //outer loop
        
        for(int j=1; j<=nst; j++){  //second line star for left
            printf("* ");
        }
        for(int k=1; k<=nsp; k++){  // second line space for middle
            printf("  ");
        }
        for(int m=1; m<=nst; m++){  // second line star for right
            printf("* ");
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}