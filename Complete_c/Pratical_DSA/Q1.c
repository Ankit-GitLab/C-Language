#include <stdio.h>
#define MAX 100

void insert(int arr[], int *n);
void delete(int arr[], int *n);
void search(int arr[], int n);
void display(int arr[], int n);

int main() {
    printf("program by Ankit, roll_246003\n");
    int arr[MAX], n, choice;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    do {
        printf("\n1.Insert  2.Delete  3.Search  4.Display  5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: insert(arr, &n); break;
            case 2: delete(arr, &n); break;
            case 3: search(arr, n); break;
            case 4: display(arr, n); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);
    return 0;
}

void insert(int arr[], int *n) {
    int pos, val;
    printf("Enter position (1-%d) & value: ", *n + 1);
    scanf("%d%d", &pos, &val);
    if (pos < 1 || pos > *n + 1) return;
    for (int i = *n; i >= pos; i--) arr[i] = arr[i - 1];
    arr[pos - 1] = val; (*n)++;
    printf("Inserted!\n");
}

void delete(int arr[], int *n) {
    int pos;
    printf("Enter position (1-%d): ", *n);
    scanf("%d", &pos);
    if (pos < 1 || pos > *n) return;
    for (int i = pos - 1; i < *n - 1; i++) arr[i] = arr[i + 1];
    (*n)--; printf("Deleted!\n");
}

void search(int arr[], int n) {
    int val, f = 0;
    printf("Enter value to search: ");
    scanf("%d", &val);
    for (int i = 0; i < n; i++)
        if (arr[i] == val) { printf("Found at position %d\n", i + 1); f = 1; break; }
    if (!f) printf("Not found!\n");
}

void display(int arr[], int n) {
    if (n == 0) { printf("Empty array!\n"); return; }
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}
