#include <stdio.h> 

int main() {
    int number; 

    // Asking user to enter the number
    printf("Enter a number: ");
    scanf("%d", &number); 

    printf("Factors of %d are: ", number); 

    // Loop to find factors
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);  
        }
    }

    printf("\n"); 
    return 0; 
}
