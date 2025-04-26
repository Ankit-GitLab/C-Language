#include <stdio.h>

// Define a structure for Student
struct Student {
    int rollNo;         // To store roll number
    char name[10];      // To store name (max 9 characters + null terminator)
    float marks;        // To store marks
};

int main() {
    // Declare and initialize an array of 5 Student structures
    struct Student Ankit[5] = {
        {3,  "Ankit",  95.0},     // Student 1
        {23, "Vedant", 96.45},    // Student 2
        {45, "Vishal", 45.6},     // Student 3
        {22, "Ravi",   98.5},     // Student 4
        {41, "Suraj",  100.0}     // Student 5
    };

    // Loop to print details of each student
    for (int i = 0; i < 5; i++) {
        printf("\nStudent Name: %s, Roll No: %d, Marks: %.2f", 
               Ankit[i].name, Ankit[i].rollNo, Ankit[i].marks);
    }

    return 0;  // Return 0 to indicate successful execution
}
