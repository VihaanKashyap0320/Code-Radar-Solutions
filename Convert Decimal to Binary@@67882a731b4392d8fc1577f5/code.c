#include <stdio.h>
void decimalToBinary(int num) {
    int binary[32];  // Array to store binary digits
    int i = 0;
    // Handle special case when num is 0
    if (num == 0) {
        printf("0");
        return;
    }
    // Loop to extract binary digits
    while (num > 0) {
        binary[i] = num & 1;  // Get the least significant bit
        num = num >> 1;       // Right shift num by 1 (divide by 2)
        i++;
    }
    // Print the binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}
int main() {
    int num;
    scanf("%d", &num);
    // Convert and print binary representation
    decimalToBinary(num);

    printf("\n");
    return 0;
}