#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node {
    int data;
    struct Node* next;
};


void findLargestAndSecondLargest(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    if (head->next == NULL) {
        printf("List contains only one node (%d). Second largest element does not exist.\n", head->data);
        return;
    }

    int first = INT_MIN;
    int second = INT_MIN;

    struct Node* current = head;

    while (current != NULL) {
        if (current->data > first) {
            second = first;
            first = current->data;
        } else if (current->data > second && current->data != first) {
            second = current->data;
        }
        current = current->next;
    }

    if (second == INT_MIN) {
        printf("Largest element: %d\n", first);
        printf("There is no distinct second largest element (all values may be equal).\n");
    } else {
        printf("Largest element: %d\n", first);
        printf("Second largest element: %d\n", second);
    }
}

void insert(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    struct Node* temp = *head_ref;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}


void display(struct Node* head) {
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


    insert(&head, 12);
    insert(&head, 35);
    insert(&head, 1);
    insert(&head, 10);
    insert(&head, 34);
    insert(&head, 35);

    display(head);
    findLargestAndSecondLargest(head);

    return 0;
}
