#include <stdio.h> // Including the standard input-output library

// Defining a structure 'Student' using typedef to create alias 'stu'
typedef struct Student {
    int rollNo;        // To store roll number
    char name[10];     // To store name (maximum 9 characters + 1 null character)
    float marks;       // To store marks
} stu;

int main() {
    stu Ankit = {3, "Ankit", 95.0}; // Initializing a structure variable 'Ankit'

    // Printing the details of the student
    printf("\nStudent Name: %s, Roll No: %d, Marks: %.2f", 
           Ankit.name, Ankit.rollNo, Ankit.marks);

    return 0; // Returning 0 to indicate successful execution
}
