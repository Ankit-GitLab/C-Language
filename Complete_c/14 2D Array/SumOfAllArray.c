#include<stdio.h>  // Include standard input-output library

int main() {
    
    // Taking input for number of rows and columns
    int r, c;
    printf("Enter number of row : ");  // Prompt the user for the number of rows
    scanf("%d", &r);  // Store the number of rows entered by the user
    printf("Enter number of column : ");  // Prompt the user for the number of columns
    scanf("%d", &c);  // Store the number of columns entered by the user
    printf("Enter total element : %d\n", r * c);  // Display the total number of elements in the matrix

    int arr[r][c];  // Declare a 2D array with r rows and c columns

    // Input the elements of the matrix
    for (int i = 0; i < r; i++) {  // Loop through each row
        for (int j = 0; j < c; j++) {  // Loop through each column
            scanf("%d", &arr[i][j]);  // Input the element at the current position
        }
    }

    // Print the matrix
    printf("Your matrix is below\n");  // Display the matrix header
    for (int i = 0; i < r; i++) {  // Loop through each row
        for (int j = 0; j < c; j++) {  // Loop through each column
            printf("%d ", arr[i][j]);  // Print the element at the current position
        }
        printf("\n");  // Move to the next line after each row
    }

    // Calculate the sum of all elements in the matrix
    int sum = 0;  // Initialize sum to 0
    printf("Sum of all\n");  // Display sum header
    for (int i = 0; i < r; i++) {  // Loop through each row
        for (int j = 0; j < c; j++) {  // Loop through each column
            sum += arr[i][j];  // Add the element to the sum
        }
    }

    // Print the total sum of all elements in the matrix
    printf("The Sum of Matrix is : %d\n", sum);  // Display the sum of all elements

    return 0;  // End of the program
}
