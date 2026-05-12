#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

    void print(int runs){
        cout<<name<<" "<<this->runs<<" "<<avg<<endl;
        cout<<runs<<endl;
    }
};
int main(){
    Cricketer c1("virat kohli",25000,55.2);
    Cricketer c2("Rohit Sharma",18000,47.8);

    c1.print(5);
    c2.print(7);
}