#include<stdio.h>

int main(){
    // Declare and initialize a character array using string literal (size is automatically set to 6 including '\0')
    char a[] = "Hello";

    // Declare a character array of size 50 and initialize it with "Hello" (remaining characters are '\0')
    char b[50] = "Hello";

    // Declare and initialize a character array using individual characters with null terminator
    char c[] = {'H','e','l','l','o','\0'};

    // Declare a character array of size 6 and initialize it with individual characters and null terminator
    char d[6] = {'H','e','l','l','o','\0'};

    // Print all character arrays as strings
    printf("a = %s   b = %s   c = %s   d = %s\n",a,b,c,d);

    return 0;   // End of program
}
