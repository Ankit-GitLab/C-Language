#include <stdio.h>

int main()
{

    int rollNumbers[5] = {1, 2, 3, 4, 5};
    char names[5][10] = {"Ankit", "Vedant", "Vishal", "Ravi", "Suraj"};
    float marks[5] = {95.0, 90.5, 92.0, 85.0, 72.5};

    for (int i = 0; i < 5; i++)
    {
        // Print each student's name, roll number, and marks
        printf("Student name : %s      RollNo : %d      Marks : %f\n\n", names[i], rollNumbers[i], marks[i]);
    }

    return 0;
}
