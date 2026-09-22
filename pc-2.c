#include <stdio.h>

#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;


void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
    } else {
        if (front == -1) {
            front = 0; // Set front to 0 when inserting the first element
        }
        rear++;
        queue[rear] = value;
        printf("Enqueued %d into the queue.\n", value);
    }
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Cannot dequeue from an empty queue.\n");
        return -1;
    } else {
        int dequeuedValue = queue[front];
        front++;

        // Reset pointers if queue becomes empty
        if (front > rear) {
            front = -1;
            rear = -1;
        }
        return dequeuedValue;
    }
}


int peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return -1;
    }
    return queue[front];
}


void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Current Queue (front to rear): ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    printf("Front element: %d\n", peek());

    printf("Dequeued element: %d\n", dequeue());
    printf("Dequeued element: %d\n", dequeue());

    display();

    return 0;
}
