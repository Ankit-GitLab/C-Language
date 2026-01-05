#include<stdio.h>
int main(){
    int arr[2][2] = {{2,4},{3,4}};
    int r = 2, c = 2;      // current size
    int x = 0, y = 1;      // insert position
    int val = 99;          // value to insert
    
    arr[x][y] = 12;
       for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}