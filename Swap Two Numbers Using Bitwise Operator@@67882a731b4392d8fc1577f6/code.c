#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);  
    a = a ^ b;  // Step 1: a becomes the XOR of a and b
    b = a ^ b;  // Step 2: b becomes the original value of a
    a = a ^ b;  // Step 3: a becomes the original value of b

    // Print the swapped values
    printf("%d %d\n", a, b);
    return 0;
}