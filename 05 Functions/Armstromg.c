#include <stdio.h>  // Include standard input/output
#include <math.h>   // Include math functions like pow()

// Function to count number of digits in the number
int countDigits(int num) {
    int count = 0;

    while (num != 0) {
        count++;            // Increment digit count
        num /= 10;          // Remove last digit
    }

    return count;           // Return total number of digits
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int sum = 0, temp = num;
    int digits = countDigits(num); // Get number of digits

    while (temp != 0) {
        int digit = temp % 10;                      // Get last digit
        sum += pow(digit, digits);                  // Add digit^digits to sum
        temp /= 10;                                 // Remove last digit
    }

    // Check if the sum is equal to the original number
    if (sum == num) {
        return 1;   // Return 1 (true) if Armstrong
    } else {
        return 0;   // Return 0 (false) otherwise
    }
}

int main() {
    int number;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the isArmstrong() function and print result
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is NOT an Armstrong number.\n", number);
    }

    return 0; // End of program
}
