#include<stdio.h>

// Define a structure for Student
struct Student {
    int rollNo;        // To store roll number
    char name[10];     // To store name (max 9 characters + null terminator)
    float marks;       // To store marks
};

int main() {

    // Direct initialization
    struct Student s1 = {246023,"Ankit",96.89};  // Declare a variable of type struct Student
    printf("\nHere are the student details:\n");
    printf("Roll No: %d   Name: %s   Marks: %.2f\n", s1.rollNo, s1.name, s1.marks);


    // Designated initialization
    struct Student s2 = {.name = "Vishal",.marks = 89.67,.rollNo =  246045};  
    printf("\nHere are the student details:\n");
    printf("Roll No: %d   Name: %s   Marks: %.2f\n", s2.rollNo, s2.name, s2.marks);


    // zero initialization 
    struct Student s3 = {0};
    printf("\nHere are the student details:\n");
    printf("Roll No: %d   Name: %s   Marks: %.2f\n", s3.rollNo, s3.name, s3.marks);
    


    //copy initialization 
    struct Student s4 = s1;
    s4.rollNo = 246003;
    printf("\nHere are the student details:\n");
    printf("Roll No: %d   Name: %s   Marks: %.2f\n", s4.rollNo, s4.name, s4.marks);
    
    

    return 0;  // Return 0 to indicate successful execution
}
