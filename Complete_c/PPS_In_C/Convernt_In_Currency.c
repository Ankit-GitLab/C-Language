#include <stdio.h> // Including standard input-output library

int main() {
    int amount; // Variable to store the amount
    int notes_100, notes_50, notes_10,
     notes_5, notes_2, notes_1; // Variables to store number of notes

    // Asking user to enter the amount
    printf("Enter the amount (in Rs.) : ");
    scanf("%d", &amount); // Taking input

    notes_100 = amount / 100; 
    amount = amount % 100;    

    notes_50 = amount / 50;   
    amount = amount % 50;     

    notes_10 = amount / 10;   
    amount = amount % 10;     
    notes_5 = amount / 5;     
    amount = amount % 5;      

    notes_2 = amount / 2;     
    amount = amount % 2;     

    notes_1 = amount; 

    // Printing the result
    printf("\nMinimum number of notes required:\n");
    printf("100 Rs notes : %d\n", notes_100);
    printf("50 Rs notes : %d\n", notes_50);
    printf("10 Rs notes : %d\n", notes_10);
    printf("5 Rs notes  : %d\n", notes_5);
    printf("2 Rs notes  : %d\n", notes_2);
    printf("1 Rs notes  : %d\n", notes_1);

    return 0; 

}
