#include<iostream> // input-output library
using namespace std; // std namespace use karne ke liye

int main(){ // main function start

    int a = 10; // numerator
    int b = 0; // denominator

    try{ // risky code block

        if(b == 0){ // check divide by zero
            throw b; // exception throw
        }

        cout << a/b; // division
    }

    catch(int x){ // exception catch
        cout << "Division by zero possible nahi hai"; // error message
    }

    return 0; // program end
}

// Explanation

// Is program me:

// --b ki value 0 hai
// --throw b exception generate karta hai
// --catch(int x) us exception ko catch karta hai
// --error message display hota hai