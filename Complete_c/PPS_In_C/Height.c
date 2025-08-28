#include <stdio.h> 

int main() {
    float height;

    printf("Enter the height of the child (in feet) : ");
    scanf("%f", &height); 

    // Checking height and displaying result
    if (height < 2.5) {
        printf("The child is Short\n");
    } 
    else if (height >= 2.5 && height <= 4.0) {
        printf("The child is Normal\n");
    } 
    else if (height > 4.0 && height <= 5.5) {
        printf("The child is Tall\n");
    }
    else {
        printf("Height out of expected range.\n"); // For heights above 5.5 feet
    }

    return 0; 
}
