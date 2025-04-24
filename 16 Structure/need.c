#include <stdio.h>

int main()
{
    // Declare an array to store roll numbers of 5 students
    int rollNumbers[5] = {1, 2, 3, 4, 5};

    // Declare a 2D character array to store names of 5 students (each name max 9 chars + null terminator)
    char names[5][10] = {"Ankit", "Vedant", "Vishal", "Ravi", "Suraj"};

    // Declare an array to store marks of 5 students
    float marks[5] = {95.0, 90.5, 92.0, 85.0, 72.5};

    // Loop through all 5 students
    for (int i = 0; i < 5; i++)
    {
        // Print each student's name, roll number, and marks
        printf("Student name : %s      RollNo : %d      Marks : %f\n\n", names[i], rollNumbers[i], marks[i]);
    }

    return 0;   // Indicate successful program termination
}
