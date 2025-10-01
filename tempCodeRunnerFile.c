#include <stdio.h>
#define MAX 50

int queue[MAX];
int front = -1, rear = -1;

// Check if queue is full
int isFull() {
    return rear == MAX - 1;
}

// Check if queue is empty
int isEmpty() {
    return front == -1 || front > rear;
}

// Insert element into queue
void enqueue(int element) {
    if (isFull()) {
        printf("Queue Overflow! Cannot insert %d", element);
        return;
    }
    if (front == -1) // First insertion
        front = 0;
    rear++;
    queue[rear] = element;
    printf("%d enqueued to queue", element);
}

// Remove element from queue
int dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! Cannot dequeue element");
        return -1;
    }
    int element = queue[front];
    front++;
    printf("%d dequeued from queue", element);
    return element;
}

// Peek front element
int peek() {
    if (isEmpty()) {
        printf("Queue is empty");
        return -1;
    }
    return queue[front];
}

// Display all elements in queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();  // Queue elements: 10 20 30

    printf("Element at front is %d", peek());  // 10

    dequeue();
    display();  // Queue elements: 20 30

    dequeue();
    dequeue();
    dequeue(); // Attempt to dequeue from empty queue

    return 0;
}