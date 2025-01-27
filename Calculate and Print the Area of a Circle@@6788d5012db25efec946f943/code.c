#include <stdio.h>
int main() {
    float radius, area;
    const float n = 3.14; // Value of pi as 3.14
    scanf("%f", &radius);
    area = n * radius * radius;
    printf("Area: %.2f\n", area); // Print area rounded to two decimal places
    return 0;
}