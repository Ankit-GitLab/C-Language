#include<stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;

void push(int value){
    if(top == MAX-1){
        printf("Stack is overflow\n");
    }else{
        top++;
        stack[top] = value;
        printf("%d push into the stack\n",value);
    }
}

void pop(){
    if(top == -1){
        printf("Satck underflow\n");
    }else{
        printf("%d poped from stack\n",stack[top]);
        top--;
    }
}

void peek(){
    if(top == -1){
        printf("Stack in empty\n");
    }else{
        printf("Top element is : %d\n",stack[top]);
    }
}

void display(){
    if(top == -1){
        printf("Stack in empty\n");
    }else{
        printf("Stack ement : ");
        for(int i=top; i>=0; i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    display();
    peek();
    pop();
    display();
    return 0;
}