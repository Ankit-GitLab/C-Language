#include <stdio.h>

int main() {
    float distance_km; 
    float distance_meters, distance_feet,
     distance_inches, distance_centimeters; // Variables for conversions
     

    printf("Enter distance between two cities (in kilometers): ");
    scanf("%f", &distance_km); 

    // Converting distance into various units
    distance_meters = distance_km * 1000;         
    distance_centimeters = distance_meters * 100;  
    distance_inches = distance_centimeters / 2.54; 
    distance_feet = distance_inches / 12;    

    // Printing the converted distances
    printf("\nDistance in meters: %.2f meters", distance_meters);
    printf("\nDistance in centimeters: %.2f cm", distance_centimeters);
    printf("\nDistance in inches: %.2f inches", distance_inches);
    printf("\nDistance in feet: %.2f feet\n", distance_feet);

    return 0; 
}
