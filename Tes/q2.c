#include<stdio.h>
int main(){
    int num[] = {24,34,12,44,56,17};
    int i, *a;
    a =&num[0];
    for(i=0; i<=5; i++){
        printf("%u\n %d\n",a,*a);
            a++;
    }
    return 0;
}