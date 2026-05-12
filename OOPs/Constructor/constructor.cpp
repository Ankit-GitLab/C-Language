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
};

int main(){

    Student s1("Ankit Kumar", 246003, 8.2);

    cout << s1.name << " " << s1.rno << " " << s1.gpa << endl;

    Student s2("Dakasha", 246023, 8.9);

    cout << s2.name << " " << s2.rno << " " << s2.gpa << endl;
}