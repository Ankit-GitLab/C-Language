#include<stdio.h>
#include<string.h>

int main(){

    // Compare "apple" with "banana" using strcmp
    int result = strcmp("apple", "banana");
    // Print the result of the comparison
    printf("Comparison of apple and banana is : %d\n", result);

    // Compare "cherry" with "banana" using strcmp
    result = strcmp("cherry", "banana");
    // Print the result of the comparison
    printf("Comparison of cherry and banana is : %d\n", result);

    // Compare "date" with "date" using strcmp
    result = strcmp("date", "date");
    // Print the result of the comparison
    printf("Comparison of date and date is : %d\n", result);

    return 0;  // Indicate successful execution
}
