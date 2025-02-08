#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);  // Read input

    if (num == 0) {  // Special case for 0
        printf("0");
        return 0;
    }

    // Loop to extract and print bits
    for (int i = 31; i >= 0; i--) {
        // Extract the bit at position i
        int bit = (num >> i) & 1;

        // Print the bit only if it is 1 or if we've already printed a 1
        if (bit == 1 || i < 31) {
            printf("%d", bit);
        }
    }

    printf("\n");  // Print a newline after binary number
    return 0;
}
