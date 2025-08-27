#include<stdio.h>
int main(){
    #define MAX 100;
    int n = 0;

    void insertEND(int value){
        if(n == MAX){
            printf("Array is full! cannot insert.\n");
            return ;
        }
        arr[n++] = value;
        printf("nserted %d at the end \n");
    }

    void insertAtPos(int value ,  int pos){
        if(n == MAX){
            printf("Array is full! cannot \n");
            return ;
        }
        if(pos < 0 || pos > n){
            printf("invalid position!\n");
            return;
    
        }
        for(int i=0; i>pos; i--){
            arr[i] = arr[i-1];
            arr[pos] = value;
            n++;
            printf(" inserted %d at position %d \n,value,pos");
        }

        void deleteByValue(int value){
            int i, found = 0;
            for(i=0; i<n; i++){
                if(arr[i] == 
            }
        }

        void deleteByPos(int pos)
        if(pos < 0 || pos >= n){
            printf("invalid position")
            return;
        }

    }
    return 0;
}