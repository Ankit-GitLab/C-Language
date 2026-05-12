#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float gpa;

    Student(string s, int r, float g){ // parameterized constructor
        name = s;
        rno = r;
        gpa = g;
    }

    Student(string s, int r){ // parameterized constructor
        name = s;
        rno = r;
    }

    Student(){ 
        
    }
};

int main(){

    Student s1("Ankit kumar",246003);
    s1.gpa = 8.2;

    Student s2;
    s2.name = "Sonali kumar";
    s2.rno = 88;
    s2.gpa = 8.8;

    Student s3 = s1; // deep copy create
    s3.name = "Rocky";

    Student s4(s1); // copy constructor - deep copy
    s4.name = "moto";

   

    cout << s1.name << " " << s1.rno << " " << s1.gpa << endl;
    cout << s2.name << " " << s2.rno << " " << s2.gpa << endl;
    cout << s3.name << " " << s3.rno << " " << s3.gpa << endl;
    cout << s4.name << " " << s4.rno << " " << s4.gpa << endl;
}