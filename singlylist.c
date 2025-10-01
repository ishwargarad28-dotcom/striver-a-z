#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node* insertFront(struct Node* head, int val) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;
    if (head) head->prev = newNode;
    return newNode;
}

struct Node* insertEnd(struct Node* head, int val) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    if (!head) { newNode->prev = NULL; return newNode; }
    struct Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

struct Node* deleteFront(struct Node* head) {
    if (!head) return NULL;
    struct Node* temp = head;
    head = head->next;
    if (head) head->prev = NULL;
    free(temp);
    return head;
}

struct Node* deleteEnd(struct Node* head) {
    if (!head) return NULL;
    struct Node* temp = head;
    if (!temp->next) { free(temp); return NULL; }
    while (temp->next) temp = temp->next;
    temp->prev->next = NULL;
    free(temp);
    return head;
}

void traverse(struct Node* head) {
    struct Node* temp = head;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("");
}

// Demo main for testing
int main() {
    struct Node* head = NULL;
    head = insertFront(head, 10);
    head = insertEnd(head, 20);
    head = insertFront(head, 5);
    traverse(head); // Output: 5 10 20
    head = deleteFront(head);
    traverse(head); // Output: 10 
    head = deleteEnd(head);
    traverse(head); // Output: 10
    return 0;
}