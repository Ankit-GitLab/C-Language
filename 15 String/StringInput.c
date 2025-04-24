#include<stdio.h>

int main(){
    // Declare a character array to store the name
    char name[50];

    // Prompt the user to enter their name
    printf("Please enter your name : ");

    // Read a line of text (until newline) using gets (unsafe, not recommended)
    gets(name);

    // Print the name using printf
    printf("Good morning : %s\n", name);

    // Print the name using puts (adds a newline automatically)
    printf("Good morning : ");
    puts(name);

    // Prompt the user to enter their nickname
    printf("Now, enter your nickname : ");

    // Read a line of input using fgets (safe, reads until newline or size limit)
    fgets(name, sizeof(name), stdin);

    // Print the nickname using puts
    printf("Good morning : ");
    puts(name);

    return 0;   // End of program
}
