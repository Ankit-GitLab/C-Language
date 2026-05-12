#include<iostream>
using namespace std; // this allow to use the standard libraryobject without writting std
class Student{ // Student is a new data type 
public:
    string name;
    int rno; 
    float gpa;
};


int main(){
    Student s1;
    s1.name = "Ankit";
    //s1.rno = 246003;
    s1.gpa = 8.2;
    cout << "Write your rno: ";
    cin >> s1.rno;


    Student s2;
    s2.name = "Dakasha";
    s2.rno = 246023;
    s2.gpa = 8.9;

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
}
