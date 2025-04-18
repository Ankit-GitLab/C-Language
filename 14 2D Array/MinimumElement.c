#include<stdio.h>  // Include standard input/output library

int main() {
    
    // Taking input for rows and columns
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);  // Read number of rows
    printf("Enter number of columns: ");
    scanf("%d", &c);  // Read number of columns

    // Display total number of elements
    printf("Enter total elements: %d\n", r * c);  
    
    // Declare a 2D array with r rows and c columns
    int arr[r][c];

    // Taking input elements for the 2D array
    for (int i = 0; i < r; i++) {  // Loop over rows
        for (int j = 0; j < c; j++) {  // Loop over columns
            scanf("%d", &arr[i][j]);  // Read each element
        }
    }

    // Print the entire matrix
    printf("Your matrix is below:\n");
    for (int i = 0; i < r; i++) {  // Loop through rows
        for (int j = 0; j < c; j++) {  // Loop through columns
            printf("%d ", arr[i][j]);  // Print each element
        }
        printf("\n");  // Move to the next row
    }

    // Find minimum number and track its indices
    int min = arr[0][0];  // Initialize min with the first element
    int minRow = 0, minCol = 0;  // To store the position of the minimum element

    // Traverse the matrix to find the minimum value
    for (int i = 0; i < r; i++) {  // Loop over rows
        for (int j = 0; j < c; j++) {  // Loop over columns
            if (min > arr[i][j]) {  // If a smaller element is found
                min = arr[i][j];  // Update the minimum value
                minRow = i;       // Save row index of new minimum
                minCol = j;       // Save column index of new minimum
            }
        }
    }

    // Print the minimum value and its index in the matrix
    printf("The minimum number in the array: %d\n", min);
    printf("The minimum number is at index: [%d][%d]\n", minRow, minCol);

    return 0;  // End of the program
}
