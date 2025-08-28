#include <stdio.h>

int main() {
    char ch;

    // Taking input from user
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);  // Note: space before %c to consume any leftover newline

    // Checking for vowel or consonant
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a Vowel\n", ch);
        } else {
            printf("%c is a Consonant\n", ch);
        }
    } else {
        printf("Invalid input! Please enter an alphabet\n");
    }

    return 0;
}
