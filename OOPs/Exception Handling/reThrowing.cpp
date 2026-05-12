#include<iostream> // input-output library
using namespace std; // std namespace use

void test(){ // function start

    try{ // try block
        throw 100; // exception throw
    }

    catch(int x){ // exception catch

        cout << "Function me exception catch hua\n"; // message print

        throw; // re-throw exception
    }
}

int main(){ // main function start

    try{ // try block
        test(); // function call
    }

    catch(int x){ // exception catch

        cout << "Main function me exception dobara catch hua"; // message print
    }

    return 0; // program end
}


Explanation

Is program me:

--throw 100 exception generate karta hai
--Function ke catch block ne exception ko catch kiya
--throw; statement ne same exception ko dobara throw kar diya
--Control main() ke catch block me transfer ho gaya
--Wahan exception final handle hua