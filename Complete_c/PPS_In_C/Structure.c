#include <stdio.h> 

struct Student {
    char name[50];     
    int rollNo;       
    float marks;       
};

int main() {
    struct Student student; 

    printf("Enter the student's name: ");
    scanf("%s", student.name); 
    
    printf("Enter the roll number: ");
    scanf("%d", &student.rollNo); 

    printf("Enter the marks: ");
    scanf("%f", &student.marks); 

    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNo);
    printf("Marks: %.2f\n", student.marks);

    return 0; 
}
