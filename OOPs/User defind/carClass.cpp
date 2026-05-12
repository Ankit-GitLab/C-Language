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

void change2(Car& c){ //pass by reference 
   c.name = "Audi A8";
   
}

int main(){
    
// int x = 4;
// cout<<x<<endl;
// change(x);
// cout<<x<<endl;

    Car c1;
    c1.name = "Honda city";
    c1.price = 1500000;
    c1.seats = 5;
    c1.type  = "sedan";

    print(c1);
    change(c1);
    print(c1);

    Car c2;
    c2.name = "Maruti Swift";
    c2.price = 7000000;
    c2.seats = 5;
    c2.type  = "Hatchback";
    print(c2);
    change2(c2);
    print(c2);

    // Car c3;
    // c3.name = "Totoya Fortuner";
    // c3.price = 36000000;
    // c3.seats = 8;1;
    // c3.type  = "SUV";

    // print(c1);
    // print(c2);
    // print(c3);
}