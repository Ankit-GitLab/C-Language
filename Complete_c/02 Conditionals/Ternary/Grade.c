#include <stdio.h>

int main() {
    int math, science, english;
    float average;
    char grade;

    // Input marks
    printf("Enter marks in Math: ");
    scanf("%d", &math);

    printf("Enter marks in Science: ");
    scanf("%d", &science);

    printf("Enter marks in English: ");
    scanf("%d", &english);

    // Calculate average
    average = (math + science + english) / 3.0;

    // Check pass or fail using ternary operator
    (math >= 33 && science >= 33 && english >= 33) ? 
        printf("Status: Passed\n") : 
        printf("Status: Failed\n");

    // Assign grade using ternary operator (only if passed)
    grade = (average >= 90) ? 'A' : (average >= 75) ? 'B' : (average >= 60) ? 'C' :  (average >= 33) ? 'D' : 'F';

    // Display average and grade
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
