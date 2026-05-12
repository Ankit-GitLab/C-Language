#include<iostream> // input-output header file
using namespace std; // standard namespace

int main(){ // main function start

    int a = 10; // numerator value
    int b = 0; // denominator value

    try{ // risky code block

        if(b == 0){ // check denominator
            throw b; // throw exception
        }

        cout << a/b; // division operation
    }

    catch(int x){ // catch exception

        cout << "Division by zero possible nahi hai"; // error message
    }

    return 0; // end program
}


// Explanation

// Is program me:

// --b ki value 0 hai
// --divide by zero error generate ho sakta tha
// --isliye throw b statement execute hua
// --control catch block me transfer ho gaya
// --error successfully handle ho gaya