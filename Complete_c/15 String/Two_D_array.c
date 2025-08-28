#include<stdio.h>
#include<string.h>

int main(){

    // Declare a 2D array of characters to store 4 names, each with up to 9 characters (+1 for '\0')
    char names[4][10] = {"Ankit", "vedant", "Ravi", "Vishal"};

    // Print all names using puts()
    printf("Print puts --------->\n");
    for(int i = 0; i < 4; i++){
        // puts prints the string and automatically adds a newline
        puts(names[i]);
    }
     
    // Print all names using nested loops and normal character printing
    printf("print normal---------->\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < strlen(names[i]); j++){
            // Print each character of the name one by one
            printf("%c", names[i][j]);
        }
        // Move to the next line after printing a full name
        printf("\n");
    }

    return 0; // Indicate successful execution
}
