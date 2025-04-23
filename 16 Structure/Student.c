#include<stdio.h>

struct Student {
    int rollNo;
    char name[10];
    float marks;
};
int main(){

    struct Student Ankit;

    printf("please enter student details\n");

    printf("Enter the roll no : ");
    scanf("%d",&Ankit.rollNo);

    printf("Enter the name : ");
    scanf("%9s",Ankit.name);

    printf("Now enter your marks : ");
    scanf("%f",&Ankit.marks);

    printf("Here, enter the student details\n");
    printf("RollNo : %d   Name : %s    Marks : %.2f ",Ankit.rollNo,Ankit.name,Ankit.marks);
    
    return 0;
}