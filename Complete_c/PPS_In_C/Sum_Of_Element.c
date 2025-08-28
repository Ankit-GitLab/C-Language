#include <stdio.h> 
int main() {
    int n; 
    int sum = 0; 

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n); // Read the input value for 'n'

    int arr[n]; 

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    
    for (int i = 0; i < n; i++) {
        sum += arr[i]; 
    }

    printf("The sum of all elements in the array is: %d\n", sum);

    return 0; 
}
