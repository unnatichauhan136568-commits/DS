#include <stdio.h>
#include <stdbool.h>

#define MAX 5

int stack[MAX];
int top = -1;

bool isEmpty() {
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
