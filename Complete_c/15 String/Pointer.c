#include <stdio.h>

int main() {
    // Declare a modifiable character array (string)
    char ch[] = "Hello ankit";

    // Print the original array
    printf("Array: Before modifying : ");
    puts(ch);  // Output: Hello ankit

    // Modify the 7th character (index 6) to 'A'
    ch[6] = 'A';

    // Print the modified array
    printf("Array: After modifying : ");
    puts(ch);  // Output: Hello Ankit 

    // Declare a string literal (stored in read-only memory)
    // Using const to make it clear that it shouldn't be modified
    const char *nickName = "Hello, ankit";

    // Print the original string literal
    printf("String literal: Before modifying : ");
    puts(nickName);  // Output: Hello, ankit

    // ⚠️ Trying to modify string literals causes undefined behavior.
    // The line below is incorrect and dangerous.
    // nickName[6] = 'A';  // ❌ This will likely cause a segmentation fault

    // If you want to modify it, copy it to a modifiable array first
    char nameCopy[] = "Hello, ankit";
    nameCopy[6] = 'A';

    printf("String literal copied to array and modified : ");
    puts(nameCopy);  // Output: Hello, Ankit

    return 0;
}
