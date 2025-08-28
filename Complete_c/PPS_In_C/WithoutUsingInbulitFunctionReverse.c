#include <stdio.h> 

int main() {
    char str[100]; 
    int i, length = 0; 
    // Asking user to input a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Finding the length of the string manually
    for (i = 0; str[i] != '\0'; i++) {
        length++; // Counting each character until null character '\0'
    }

    // Printing the string in reverse order
    printf("Reversed string is: ");
    for (i = length - 1; i >= 0; i--) { 
        printf("%c", str[i]); 
    }

    printf("\n"); 

    return 0; 
}
