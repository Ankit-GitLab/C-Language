#include<iostream>
using namespace std;

template <class T>

T add(T a, T b){

    return a + b;
}

int main(){

    cout << add(5,10) << endl;

    cout << add(2.5,3.5);

    return 0;
}

// Explanation
// ----add(5,10) ke liye compiler int type ka function create karta hai
// ----add(2.5,3.5) ke liye compiler float type ka function create karta hai

// Isliye ek hi function multiple data types ke liye work karta hai.