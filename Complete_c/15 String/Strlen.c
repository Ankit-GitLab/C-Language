#include<stdio.h>
#include<string.h>   // Include string.h for strlen function

int main(){

    // Declare a character array to store the name
    char name[50];

    // Prompt the user to enter their name
    printf("please your name : ");

    // Read a line of input from the user (up to 49 characters + '\0')
    fgets(name, 50, stdin);

    // Get the length of the string including newline character if entered
    int size = strlen(name);

    // Print the length of the string
    printf("The length of your name is : %d", size);

    return 0;   // End of program
}
