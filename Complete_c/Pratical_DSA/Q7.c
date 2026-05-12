#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL, *rear = NULL;

void enqueue() {
    int val;
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &val);
    newNode->data = val;
    newNode->next = NULL;

    if (rear == NULL)
        front = rear = newNode;
    else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Inserted successfully!\n");
}

void dequeue() {
    if (front == NULL)
        printf("Queue Underflow!\n");
    else {
        struct Node *temp = front;
        printf("Deleted element: %d\n", temp->data);
        front = front->next;
        if (front == NULL)
            rear = NULL;
        free(temp);
    }
}

void display() {
    if (front == NULL)
        printf("Queue is empty!\n");
    else {
        struct Node *temp = front;
        printf("Queue elements: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
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
