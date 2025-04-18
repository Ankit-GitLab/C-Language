#include<stdio.h>
int main(){

    //Taking input
    int r,c;
    printf("Enter number of row : ");
    scanf("%d",&r);
    printf("Enter number of column : ");
    scanf("%d",&c);
    printf("Enter total element : %d\n",r*c);
    int arr[r][c]; 

    //Input matrix...
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }


    // Print matrix...
    printf("Your matrix is below\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    //sum print
    int sum =0;
    printf("SUm of all\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
           sum += arr[i][j];
        }
    }
    printf("The SUm of Matrix is : %d\n",sum);


    return 0;
}