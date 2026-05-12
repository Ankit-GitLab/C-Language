#include<iostream>
using namespace std; // this allow to use the standard libraryobject without writting std
class Student{ // Student is a new data type 
public:
    string name;
    int rno; 
    float gpa;

    Student(){// default constructor

    }
};


int main(){
    Student s1;
    s1.name = "Ankit";
    s1.rno = 246003;
    s1.gpa = 8.2;

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
}
