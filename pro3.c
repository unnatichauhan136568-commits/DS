#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* insertAtEnd(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;

    return head;
}


void insertAfter(struct Node* head, int target, int value) {
    struct Node* temp = head;


    while (temp != NULL && temp->data != target) {
        temp = temp->next;
    }


    if (temp == NULL) {
        printf("Node with value %d not found in the list.\n", target);
        return;
    }


    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;
}


struct Node* insertBefore(struct Node* head, int target, int value) {
    if (head == NULL) {
        printf("List is empty.\n");
        return head;
    }


    if (head->data == target) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = head;
        return newNode; // New node becomes the new head
    }

    struct Node* temp = head;
    while (temp->next != NULL && temp->next->data != target) {
        temp = temp->next;
    }


    if (temp->next == NULL) {
        printf("Node with value %d not found in the list.\n", target);
        return head;
    }


    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}


void displayList(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;


    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 40);

    printf("Initial Linked List:\n");
    displayList(head);


    printf("\nInserting 25 after node 20:\n");
    insertAfter(head, 20, 25);
    displayList(head);


    printf("\nInserting 15 before node 20:\n");
    head = insertBefore(head, 20, 15);
    displayList(head);


    printf("\nInserting 5 before node 10 (head):\n");
    head = insertBefore(head, 10, 5);
    displayList(head);

    return 0;
}
