#include <stdio.h>

// Define a structure for Student
struct Student {
    int rollNo;         // To store roll number
    char name[10];      // To store name (max 9 characters + null terminator)
    float marks;        // To store marks
};

int main() {
    int a = 5;          // Declare an integer variable
    int *ptr = &a;      // Pointer to the variable 'a'

    // Initialize a structure variable 'Ankit' with roll number, name, and marks
    struct Student Ankit = {3, "Ankit", 95.0};

    // Declare a pointer to the structure and assign it the address of 'Ankit'
    struct Student *ptr1 = &Ankit;

    // Accessing structure members using the structure variable
    printf("\n\nStudent Name: %s   Roll No: %d    Marks: %.2f", 
            Ankit.name, Ankit.rollNo, Ankit.marks);

    // Accessing structure members using pointer and dereferencing with (*ptr).member
    printf("\n\nStudent Name: %s   Roll No: %d    Marks: %.2f", 
            (*ptr1).name, (*ptr1).rollNo, (*ptr1).marks);

    // Accessing structure members using pointer and arrow operator ptr->member
    printf("\n\nStudent Name: %s   Roll No: %d    Marks: %.2f", 
            ptr1->name, ptr1->rollNo, ptr1->marks);

    return 0;   // End of program
}
