#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);  // Read input
    while ((num & 1) == 0 && num != 0) {  // Check rightmost bit
        num = num >> 1;  // Right shift by 1
        count++;  // Increase counter
    }
    printf("%d\n", count);  // Print the count of trailing zeros
    return 0;
}