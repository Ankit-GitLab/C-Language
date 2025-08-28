#include<stdio.h>

int main() {
    // Taking input
    int r, c;  // Declare variables for the number of rows and columns
    printf("Enter number of rows: ");  // Prompt for number of rows
    scanf("%d", &r);  // Read the number of rows from user input
    printf("Enter number of columns: ");  // Prompt for number of columns
    scanf("%d", &c);  // Read the number of columns from user input
    printf("Enter total elements: %d\n", r * c);  // Print total number of elements based on rows and columns

    int arr[r][c];  // Declare a 2D array to store the matrix elements
    
    // Input elements into the matrix
    for (int i = 0; i < r; i++) {  // Loop through each row
        for (int j = 0; j < c; j++) {  // Loop through each column
            scanf("%d", &arr[i][j]);  // Read the element for the current row and column
        }
    }

    // Print the matrix
    printf("Your matrix is below:\n");  // Print a header for the matrix
    for (int i = 0; i < r; i++) {  // Loop through each row
        for (int j = 0; j < c; j++) {  // Loop through each column
            printf("%d ", arr[i][j]);  // Print the element at the current row and column
        }
        printf("\n");  // Print a new line after each row
    }

    // Find the maximum number and track its indices
    int max = arr[0][0];  // Initialize max with the first element of the matrix
    int maxRow = 0, maxCol = 0;  // Declare variables to store the row and column indices of the maximum element

    // Loop through the matrix to find the maximum element
    for (int i = 0; i < r; i++) {  // Loop through each row
        for (int j = 0; j < c; j++) {  // Loop through each column
            if (max < arr[i][j]) {  // If the current element is greater than the current max
                max = arr[i][j];  // Update max with the current element
                maxRow = i;  // Update the row index of the maximum element
                maxCol = j;  // Update the column index of the maximum element
            }
        }
    }

    // Print the maximum number and its indices
    printf("The maximum number in the array: %d\n", max);  // Print the maximum number
    printf("The maximum number is at index: [%d][%d]\n", maxRow, maxCol);  // Print the indices of the maximum number

    return 0;  // End the program
}
