#include<iostream>
using namespace std;

class Test{

private:
    int num;

public:

    Test(){
        num = 10;
    }

    friend void show(Test t);
};

void show(Test t){

    cout << "Number = " << t.num;
}

int main(){

    Test obj;

    show(obj);

    return 0;
}