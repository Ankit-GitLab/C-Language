#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    int na=n; // number of alphabet
    int nsp=1; // number for space
    char ch='A';
    for(int a=1; a<=(n*2)+1; a++){ // Alphabet for first line
        printf("%c ", ch);
        ch++;
    }
    printf("\n");
    for(int i=1; i<=n; i++){  // outer loop
        char ch='A';
        for(int j=1; j<=na; j++){  // second line  Alphabet for left
            printf("%c ",ch);
            ch++;
        }
        for(int k=1; k<=nsp; k++){  // second line  space for middle
            printf("  ");
            ch++;
        }
        for(int m=1; m<=na; m++){  // second line alphabet for right
            printf("%c ", ch);
            ch++;
        }
        na--;
        nsp+=2;
        printf("\n");

    }
    return 0;
}