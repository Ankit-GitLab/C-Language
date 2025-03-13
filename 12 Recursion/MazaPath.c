#include<stdio.h>
int maza(int cr, int cc, int er, int ec){
    int rightWays = 0;
    int  downWays = 0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){
        rightWays += maza(cr,cc+1,er,ec);
    }
    if(cc==ec){
        downWays  += maza(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightWays += maza(cr,cc+1,er,ec); 
        downWays  += maza(cr+1,cc,er,ec); 
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}
int main(){
    int n;
    printf("Enter no of rows of the maza : ");
    scanf("%d",&n);
    int m;
    printf("Enter no of columns of the maza : ");
    scanf("%d",&m);
    int noOfWays = maza(1,1,n,m);
    printf("%d",noOfWays);
    return 0;
}
