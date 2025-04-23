#include <stdio.h>

// Define a structure for Student
struct Student {
    int rollNo;         // To store roll number
    char name[10];      // To store name (max 9 characters + null terminator)
    float marks;        // To store marks
};

int main() {
    // Declare and initialize an array of 5 students
    struct Student Ankit[5] = {
        {3,  "Ankit",  95.0},
        {23, "Vedant", 96.45},
        {45, "Vishal", 45.6},
        {22, "Ravi",   98.5},
        {41, "Suraj",  100.0}
    };

    // Print student details
    for (int i = 0; i < 5; i++) {
        printf("\nStudent Name: %s, Roll No: %d, Marks: %.2f", 
               Ankit[i].name, Ankit[i].rollNo, Ankit[i].marks);
    }

    return 0;  // Return 0 to indicate successful execution
}
