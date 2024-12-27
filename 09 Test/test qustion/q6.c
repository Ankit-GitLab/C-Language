#include<stdio.h>
int main(){
    int side;
    printf(" Enter a side of square : ");
    scanf("%d",&side);
    
    int area = side*side;
    printf("the area of side is : %d",area);
    return 0;
}