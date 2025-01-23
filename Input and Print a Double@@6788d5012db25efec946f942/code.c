#include <stdio.h>

int main() {
    double num; // Declare a variable to store the double
    scanf("%lf", &num); // Read a double value using %lf
    printf("You entered: %.4lf\n", num); // Print the double value with 4 decimal places
    return 0;
}