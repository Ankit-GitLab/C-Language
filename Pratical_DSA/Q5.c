#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue() {
    int val;
    if (rear == MAX - 1)
        printf("Queue Overflow!\n");
    else {
        printf("Enter value: ");
        scanf("%d", &val);
        rear++;
        queue[rear] = val;
        printf("Inserted successfully!\n");
    }
}

void dequeue() {
    if (front == rear)
        printf("Queue Underflow!\n");
    else {
        front++;
        printf("Deleted element: %d\n", queue[front]);
    }
}

void display() {
    if (front == rear)
        printf("Queue is empty!\n");
    else {
        printf("Queue elements: ");
        for (int i = front + 1; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
        printf("program by Ankit, roll_no 246003\n");
    int choice;
    do {
        printf("\n1.Enqueue  2.Dequeue  3.Display  4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 4);
    return 0;
}
