#include <stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue overflow!\n");
        return;
    }
    
    rear++;
    queue[rear] = value;
    if (front == -1) {
        front++;
    }
    printf("%d enqueued to queue.\n", value);
}

void dequeue() {
    if (front == -1) {
        printf("Queue underflow!\n");
        return;
    }
    
    int value = queue[front];
    front++;
    if (front > rear) {
        front = rear = -1;
    }
    printf("%d dequeued from queue.\n", value);
}

void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }
    
    printf("Queue elements are:");
    for (int i = front; i <= rear; i++) {
        printf(" %d", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;
    
    while (1) {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
                break;
        }
    }
}
