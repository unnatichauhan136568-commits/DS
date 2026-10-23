#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL;
    struct Node *newNode;

    // Create a new node
    newNode = (struct Node *)malloc(sizeof(struct Node));

    // Input data
    printf("Enter data: ");
    scanf("%d", &newNode->data);

    // Insert node at the beginning
    newNode->next = head;
    head = newNode;

    // Display the linked list
    printf("Linked List: ");
    struct Node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}

