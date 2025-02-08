#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    // Flip all bits (perform bitwise NOT operation)
    int flipped_num = ~num;
    // Output the flipped number
    printf("%d\n", flipped_num);
    return 0;
}