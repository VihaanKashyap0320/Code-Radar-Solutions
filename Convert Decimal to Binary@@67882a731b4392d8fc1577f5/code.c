#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);  
    if (num == 0) {  // Special case for 0
        printf("0");
        return 0;
    }
    // Loop to process each bit of the number (from 31 to 0)
    int firstBit = 0;  // To track if we've printed the first '1' bit

    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;  // Extract the bit at position i using bitwise operations

        // Print the bit only if it is 1 or if we've already printed a 1
        if (bit == 1 || firstBit) {
            printf("%d", bit);
            firstBit = 1;  // After printing the first '1', we continue printing
        }
    }
    printf("\n");  // Print newline after the binary number
    return 0;
}