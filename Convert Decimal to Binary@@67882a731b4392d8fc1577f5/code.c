#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);  // Read input

    if (num == 0) {  // Special case for 0
        printf("0");
        return 0;
    }

    // Array to store binary digits
    int binary[32];
    int i = 0;

    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2;  // Store remainder (0 or 1)
        num = num / 2;        // Divide the number by 2
        i++;
    }

    // Print the binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");  // Print newline after the binary number
    return 0;
}
