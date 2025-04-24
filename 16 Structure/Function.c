#include <stdio.h>

// Define a structure for Student
struct Student {
    int rollNo;         // To store roll number
    char name[10];      // To store name (max 9 characters + null terminator)
    float marks;        // To store marks
};

// Function declarations
void print_student(struct Student stu);                // Pass by value
void print_student_from_pointer(struct Student *stu);  // Pass by pointer

int main() {
    // Create and initialize a Student structure
    struct Student Ankit = {3, "Ankit", 95.0};

    // Declare a pointer to the structure
    struct Student *ptr = &Ankit;

    // Call function that accepts structure by value
    print_student(Ankit);

    // Call function that accepts structure by pointer
    print_student_from_pointer(ptr);

    return 0;   // End of program
}

// Function to print student details passed by value
void print_student(struct Student stu) {
    printf("\nStudent Name: %s   Roll No: %d    Marks: %.2f", 
        stu.name, stu.rollNo, stu.marks);
}

// Function to print student details passed by pointer
void print_student_from_pointer(struct Student *stu) {
    printf("\nStudent Name: %s   Roll No: %d    Marks: %.2f", 
        stu->name, stu->rollNo, stu->marks);  // Use -> to access structure members via pointer
}
