#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Insert at end
void insertEnd(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

// Insert at beginning
void insertBegin(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// Delete a node by value
void deleteNode(int value) {
    struct Node *temp = head;

    while (temp != NULL && temp->data != value)
        temp = temp->next;

    if (temp == NULL) {
        printf("Node not found!\n");
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next; // deleting head node

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
    printf("Node %d deleted successfully.\n", value);
}

// Display list forward
void displayForward() {
    struct Node* temp = head;
    printf("Doubly Linked List (forward): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Display list backward
void displayBackward() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    while (temp->next != NULL)
        temp = temp->next;

    printf("Doubly Linked List (backward): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Doubly Linked List Menu ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete a Node\n");
        printf("4. Display Forward\n");
        printf("5. Display Backward\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            insertBegin(value);
            break;
        case 2:
            printf("Enter value: ");
            scanf("%d", &value);
            insertEnd(value);
            break;
        case 3:
            printf("Enter value to delete: ");
            scanf("%d", &value);
            deleteNode(value);
            break;
        case 4:
            displayForward();
            break;
        case 5:
            displayBackward();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
