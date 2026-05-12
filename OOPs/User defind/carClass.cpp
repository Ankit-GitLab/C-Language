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


int main(){
    
    Car c1;
    c1.name = "Honda city";
    c1.price = 1500000;
    c1.seats = 5;
    c1.type  = "sedan";

    print(c1);
   

    Car c2;
    c2.name = "Maruti Swift";
    c2.price = 7000000;
    c2.seats = 5;
    c2.type  = "Hatchback";
  
    print(c2);

    Car c3;
    c3.name = "Totoya Fortuner";
    c3.price = 36000000;
    c3.seats = 8;1;
    c3.type  = "SUV";
    
    print(c3);
}