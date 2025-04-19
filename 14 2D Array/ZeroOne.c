#include<stdio.h>

int main() {
    // Declare and initialize the 2D array
    int arr[3][4] = {
        {1, 0, 1, 1},
        {0, 1, 0, 1},
        {1, 0, 0, 1}
    };

    int maxCount = 0;      // To store the maximum number of 1s in any row
    int maxRowIndex = 0;   // To store the index of the row with max 1s

    // Traverse each row
    for(int i = 0; i < 3; i++) {
        int count = 0;  // Count of 1s in the current row

        // Traverse each column of the current row
        for(int j = 0; j < 4; j++) {
            if(arr[i][j] == 1) {
                count++;  // Increment count if element is 1
            }
        }

        // Update maxCount and maxRowIndex if a row with more 1s is found
        if(count > maxCount) {
            maxCount = count;
            maxRowIndex = i;
        }
    }

    // Print the result
    printf("The maximum count of 1s is: %d\n", maxCount);
    printf("Row with maximum 1s is at index: %d\n", maxRowIndex);

    return 0;
}
