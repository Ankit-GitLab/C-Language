#include<stdio.h>
int main (){
    int Row, Column;
    printf("Enter no. of rows : ");
    scanf("%d",&Row);
    printf("Enter no. of columns : ");
    scanf("%d",&Column);
    for(int i=1; i<=Row; i++){  // always odd number ---> 1 3 5 7 9.....n
        for(int j=1; j<=Column; j++){
            if(i==1 || i==Row || j==1 || j==Column)  printf("* ");
            else printf("  ");
        }
        
        printf("\n");
    }

    return 0;
}
