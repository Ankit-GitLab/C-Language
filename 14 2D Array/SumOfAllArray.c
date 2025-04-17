#include<stdio.h>
int main(){

    //Taking input
    int RollNo;
    printf("Enter number of student : ");
    scanf("%d",&RollNo);
    printf("Enter total element : %d\n",RollNo*4);
    printf("Enter Roll No, Physics, chemistry, math...Marks\n");
    int arr[RollNo][4]; // // Roll No, Physics, Chemistry, Math

    //Input matrix...
    for(int i=0; i<RollNo; i++){
        for(int j=0; j<4; j++){
            scanf("%d",&arr[i][j]);
        }
    }


    // Print matrix...
    printf("Your matrix is below\n");
    for(int i=0; i<RollNo; i++){
        for(int j=0; j<4; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    //sum print
    int sum =0;
    printf("SUm of all\n");
    for(int i=0; i<RollNo; i++){
        for(int j=0; j<4; j++){
           sum += arr[i][j];
        }
    }
    printf("The SUm of Matrix is : %d\n",sum);


    return 0;
}