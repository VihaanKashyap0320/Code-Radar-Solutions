#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    float average = (a + b + c) / 3.0; // Calculate average
    printf("Average: %.2f\n", average); // Print average
    
    return 0;
}