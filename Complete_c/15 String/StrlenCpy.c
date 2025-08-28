#include <stdio.h>
#include <string.h>

int main() {

    char name[50];  // Declare a character array to store the user's input

    // Ask the user to enter their name
    printf("please your name : ");
    fgets(name, 50, stdin);  // Read the user's input including spaces

    char new_name[50];  // Declare another array to copy the input name

    // Copy the content of 'name' into 'new_name'
    strcpy(new_name, name);

    // Print the result showing the name has been copied
    printf("%s has been copied to %s", name, new_name);

    return 0;  // Return 0 to indicate successful program execution
}
