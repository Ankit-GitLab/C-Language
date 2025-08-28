#include <stdio.h>  
#include <string.h> 

int main() {
    char str1[100], str2[100];

    
    printf("Enter the first string: ");
    gets(str1); 

    
    printf("Enter the second string: ");
    gets(str2); 

    // strlen() - Find the length of the string
    printf("\nLength of first string: %lu", strlen(str1));

    // strcpy() - Copy one string to another
    char copyStr[100]; 
    strcpy(copyStr, str1); 
    printf("\nCopy of first string: %s", copyStr);

   
    char concatStr[200]; 
    strcpy(concatStr, str1); 
    strcat(concatStr, str2); 
    printf("\nConcatenated string: %s", concatStr);

    // strcmp() - Compare two strings
    int cmpResult = strcmp(str1, str2);
    if (cmpResult == 0) {
        printf("\nThe two strings are equal.");
    } else if (cmpResult < 0) {
        printf("\nFirst string is smaller than second string.");
    } else {
        printf("\nFirst string is greater than second string.");
    }

    // strrev() - Reverse a string (Note: Not available in standard C, available in some compilers)
    // Alternative way: Print in reverse order manually
    printf("\nReverse of first string: ");
    for (int i = strlen(str1) - 1; i >= 0; i--) {
        printf("%c", str1[i]);
    }

    // 6. strstr() - Find a substring in a string
    char *substr;
    substr = strstr(str1, str2); // Search str2 inside str1
    if (substr != NULL) {
        printf("\nSecond string found inside first string.");
    } else {
        printf("\nSecond string NOT found inside first string.");
    }

    return 0; 
}
