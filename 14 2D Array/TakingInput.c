#include<stdio.h>
int main(){

    int c,r;
    printf("Enter row number : ");
    scanf("%d",&r);
    printf("Enter column number : ");
    scanf("%d",&c);
    printf("Total Element is equal to : %d\n",r*c);
    // taking input
    int arr[r][c];
    printf("Enter input\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // print matrix
    printf("Print the matrix\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}