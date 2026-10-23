#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL;
    struct Node *newNode, *temp;

    // Create a new node
    newNode = (struct Node *)malloc(sizeof(struct Node));

    // Input data
    printf("Enter data: ");
    scanf("%d", &newNode->data);

    // New node will be the last node
    newNode->next = NULL;

    // If list is empty
    if (head == NULL) {
        head = newNode;
    }
    else {
        // Start from first node
        temp = head;

        // Move to the last node
        while (temp->next != NULL) {
            temp = temp->next;
        }

        // Link last node to new node
        temp->next = newNode;
    }

    // Display the linked list
    printf("Linked List: ");
    temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}
