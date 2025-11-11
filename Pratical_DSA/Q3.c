#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = c;
}

char pop() {
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int precedence(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}

void infixToPostfix(char infix[]) {
    char postfix[MAX];
    int i = 0, j = 0;
    char ch;

    for (i = 0; i < strlen(infix); i++) {
        ch = infix[i];

        if (isalnum(ch)) {  // Operand
            postfix[j++] = ch;
        } 
        else if (ch == '(') {
            push(ch);
        } 
        else if (ch == ')') {
            while (stack[top] != '(')
                postfix[j++] = pop();
            pop();  // Remove '('
        } 
        else {  // Operator
            while (precedence(stack[top]) >= precedence(ch))
                postfix[j++] = pop();
            push(ch);
        }
    }

    while (top != -1)
        postfix[j++] = pop();

    postfix[j] = '\0';
    printf("Postfix Expression: %s\n", postfix);
}

int main() {
            printf("program by Ankit, roll_no 246003\n");

    char infix[MAX];
    printf("Enter an infix expression: ");
    gets(infix);

    infixToPostfix(infix);

    return 0;
}
