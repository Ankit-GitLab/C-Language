#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct Node { int data; struct Node *next; };
struct Node *top = NULL;

void push(int x) {
    struct Node *n = malloc(sizeof(struct Node));
    n->data = x; n->next = top; top = n;
}

int pop() {
    struct Node *t = top; int x = t->data;
    top = top->next; free(t); return x;
}

int evalPostfix(char *exp) {
    for (int i = 0; exp[i]; i++) {
        if (isdigit(exp[i])) push(exp[i] - '0');
        else {
            int a = pop(), b = pop();
            switch (exp[i]) {
                case '+': push(b + a); break;
                case '-': push(b - a); break;
                case '*': push(b * a); break;
                case '/': push(b / a); break;
            }
        }
    }
    return pop();
}

int main() {
    printf("program by Ankit, roll_no 246003\n");

    char exp[100];
    printf("Enter postfix expression: ");
    gets(exp);
    printf("Result = %d\n", evalPostfix(exp));
}
