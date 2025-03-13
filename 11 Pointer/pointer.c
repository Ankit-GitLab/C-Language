#include<stdio.h>
int main(){
    int a = 25;// A ki ander 5 store hai 
    int* x = &a;// *x ki ander A ka value ka address store hota hai
    int** y = &x;// **y ki ander *x ka value ka address store hota hai
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",**y);
    return 0;
}