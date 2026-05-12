#include<iostream>
using namespace std;

template <class T>

class Test{

public:

    T data;

    Test(T x){
        data = x;
    }

    void show(){
        cout << data;
    }
};

int main(){

    Test<int> obj1(100);

    Test<string> obj2("Ankit");

    obj1.show();
    cout << endl;

    obj2.show();

    return 0;
}



// Explanation
// ----Test<int> integer type object create karta hai
// ---Test<string> string type object create karta hai
// ---Compiler automatically required data type ki class generate karta hai