#include<stdio.h>

int main(){
    // Prompt the user to enter their name
    printf("Please enter your name : ");

    // Declare a character array to store the name (max 49 characters + null terminator)
    char c[50];

    // Read a string input from the user (stops reading at whitespace)
    scanf(" %s", c);

    // Print a greeting message with the entered name
    printf("Good morning %s", c);

    return 0;   // End of program
}
