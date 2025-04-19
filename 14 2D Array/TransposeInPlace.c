#include<stdio.h>
int main(){
    int n;

    // Input number of rows and columns
    printf("Enter the number of row / column : ");
    scanf("%d", &n);

    int arr[n][n]; // Declare a 2D array with r rows and c columns

    // Input the matrix elements
    printf("Enter total elements: %d\n", n * n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]); // Read element at position [i][j]
        }
    }

    //print the matrix
    printf("The matrix is below\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]); // Read element at position [i][j]
        }
        printf("\n");
    }

    // swap arr[i][j] arr[j][j]
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    //print the matrix
    printf("Transpose in place below\n");
    for(int i=0;i<n; i++){
        for(int j=i+1; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}