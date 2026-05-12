#include<iostream> // header file
using namespace std; // standard namespace

int main(){ // main function

    int a = 10; // numerator
    int b = 0; // denominator

    try{ // try block

        if(b == 0){ // check zero
            throw b; // throw exception
        }

        cout << a/b; // division
    }

    catch(int x){ // catch exception

        cout << "Divide by zero possible nahi hai"; // print message
    }

    return 0; // program end
}