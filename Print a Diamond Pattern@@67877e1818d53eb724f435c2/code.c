#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read input
    int spaces = n - 1;  // Spaces before first '*'
    int stars = 1;       // Number of stars in the first row
    // Upper half including the middle row
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (int j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
        spaces--;  // Decrease spaces for next row
        stars += 2; // Increase stars for next row
    }
    // Lower half (N-1 rows)
    spaces = 1;
    stars = 2 * (n - 1) - 1;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (int j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
        spaces++;   // Increase spaces for next row
        stars -= 2; // Decrease stars for next row
    }
    return 0;
}