#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insert();
void deleteNode();
void search();
void display();

int main() {
    int choice;
    do {
        printf("\n1. Insert  2. Delete  3. Search  4. Display  5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: insert(); break;
            case 2: deleteNode(); break;
            case 3: search(); break;
            case 4: display(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);
    return 0;
}

void insert() {
    int value;
    struct Node *newNode, *current, *prev = NULL;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter value to insert: ");
    scanf("%d", &value);
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL || head->data >= value) {
        newNode->next = head;
        head = newNode;
    } else {
        current = head;
        while (current != NULL && current->data < value) {
            prev = current;
            current = current->next;
        }
        prev->next = newNode;
        newNode->next = current;
    }
    printf("Node inserted successfully!\n");
}

void deleteNode() {
    int value;
    struct Node *current = head, *prev = NULL;

    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("Enter value to delete: ");
    scanf("%d", &value);

    while (current != NULL && current->data != value) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Value not found!\n");
        return;
    }

    if (prev == NULL)
        head = current->next;
    else
        prev->next = current->next;

    free(current);
    printf("Node deleted successfully!\n");
}

void search() {
    int value, pos = 1;
    struct Node* current = head;

    printf("Enter value to search: ");
    scanf("%d", &value);

    while (current != NULL) {
        if (current->data == value) {
            printf("Value found at position %d\n", pos);
            return;
        }
        current = current->next;
        pos++;
    }
    printf("Value not found!\n");
}

void display() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty!\n");
        return;
    }
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
