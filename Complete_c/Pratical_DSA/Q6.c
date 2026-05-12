#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue() {
    int val;
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
        printf("Queue Overflow!\n");
    else {
        printf("Enter value: ");
        scanf("%d", &val);
        if (front == -1)
            front = rear = 0;
        else if (rear == MAX - 1)
            rear = 0;
        else
            rear++;
        queue[rear] = val;
        printf("Inserted successfully!\n");
    }
}

void dequeue() {
    if (front == -1)
        printf("Queue Underflow!\n");
    else {
        printf("Deleted element: %d\n", queue[front]);
        if (front == rear)
            front = rear = -1;
        else if (front == MAX - 1)
            front = 0;
        else
            front++;
    }
}

void display() {
    if (front == -1)
        printf("Queue is empty!\n");
    else {
        printf("Queue elements: ");
        int i = front;
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear)
                break;
            i = (i + 1) % MAX;
        }
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
