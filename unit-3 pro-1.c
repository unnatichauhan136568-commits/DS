

#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next;
};


struct Node* createList(int n) {
    struct Node *head = NULL;
    struct Node *newNode, *temp;
    int i;

    for (i = 1; i <= n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter data for node %d: ", i);
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    return head;
}


void display(struct Node *head) {
    struct Node *temp = head;

    printf("\nSingly Linked List: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}


int main() {
    struct Node *head;
    int n;

    printf("Enter number of nodes: ");
    scanf("%d", &n);


    head = createList(n);


    display(head);

    return 0;
}
