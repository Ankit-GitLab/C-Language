#include<stdio.h> // code play on this game --> Tower of hanoi
void tower(int n, char s, char h, char d){
  if(n==0) return;
  tower(n-1,s,d,h);
  printf("%c --> %c\n",s,d);
  tower(n-1,h,s,d);
  return;
}
int main(){
    int n;
    printf("Enter number of disk : ");
    scanf("%d",&n);
    tower(n,'A','B','C');
   return 0; 
}