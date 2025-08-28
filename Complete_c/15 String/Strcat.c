#include <stdio.h>
#include <string.h>

int main() {

    char first_name[50];  // Declare array to store the first name
    char last_name[50];   // Declare array to store the last name

    // Ask the user to enter their first name
    printf("please enter your first name : ");
    fgets(first_name, 50, stdin);  // Read first name including spaces

    // Ask the user to enter their last name
    printf("please enter your last name : ");
    fgets(last_name, 50, stdin);   // Read last name including spaces

    // Concatenate last_name to first_name
    strcat(first_name, last_name);

    // Print the full name after concatenation
    printf("Your final name is : %s", first_name);

    return 0;  // Return 0 to indicate successful program execution
}
