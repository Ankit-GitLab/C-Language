
#include<stdio.h>
int main (){
    for(int i=1; i<=5; i++){  // always odd number ---> 1 3 5 7 9.....n
        for(int j=1; j<=5; j++){
            if(i==3 || j==3)  printf("* ");
            else printf("  ");
        }
        
        printf("\n");
    }

    return 0;
}
