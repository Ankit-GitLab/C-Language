#include<iostream>

using namespace std;

class Car{ // Car is a new data type
public:
    string name;
    int price;
    int seats;
    string type;
     
};

void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}

void change(Car c){ //pass by value 
   c.name = "Audi A8";
   
}


int main(){


    Car c1;
    c1.name = "Honda city";
    c1.price = 1500000;
    c1.seats = 5;
    c1.type  = "sedan";

    print(c1);
    change(c1);
    print(c1);

}