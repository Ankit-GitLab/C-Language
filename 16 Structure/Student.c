#include<stdio.h>

// Define a structure for Student
struct Student {
    int rollNo;        // To store roll number
    char name[10];     // To store name (max 9 characters + null terminator)
    float marks;       // To store marks
};

int main() {
    struct Student Ankit;  // Declare a variable of type struct Student

    // Input section
    printf("Please enter student details\n");

    // Input roll number
    printf("Enter the roll no: ");
    scanf("%d", &Ankit.rollNo);

    // Input name
    printf("Enter the name: ");
    scanf("%9s", Ankit.name);  // %9s to avoid buffer overflow

    // Input marks
    printf("Now enter your marks: ");
    scanf("%f", &Ankit.marks);

    // Output section
    printf("\nHere are the student details:\n");
    printf("Roll No: %d   Name: %s   Marks: %.2f\n", Ankit.rollNo, Ankit.name, Ankit.marks);

    return 0;  // Return 0 to indicate successful execution
}
