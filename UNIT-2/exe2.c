//write a c program to check whether the stack is empty

#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;


    return top == -1;
}
int main() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    top++;
    stack[top] = 10;

    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    return 0;
}
