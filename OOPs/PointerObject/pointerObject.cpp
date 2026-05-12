#include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs,float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

};
 void change(Cricketer* c){
        (*c).avg = 77.2;
    }
int main(){
    Cricketer c1("Rohit Sharma",18000,47.8);

    cout<<c1.avg<<endl;
    change(&c1);
    cout<<c1.avg<<endl;

    // int x = 6;
    // cout<<x<<endl;
    // int* ptr = &x;
    // cout<<*ptr<<endl;

}