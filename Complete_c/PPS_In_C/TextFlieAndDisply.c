#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    char cwd[1024];

    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Current directory: %s\n", cwd);
    } else {
        perror("getcwd() error");
        exit(1);
    }

    printf("Enter the filename to read: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        printf("Make sure the file exists in the above directory and is readable.\n");
        return 1;
    }

    printf("\nContents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);

    return 0;
}
