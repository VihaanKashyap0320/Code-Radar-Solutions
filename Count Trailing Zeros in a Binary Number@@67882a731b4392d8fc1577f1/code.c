#include <stdio.h>
int main() {
    unsigned int num;
    int count = 0;
    scanf("%u", &num);  // Read input
    while ((num & (1 << 31)) == 0) {  // Check the leftmost bit
        count++;  
        num = num << 1;  // Left shift by 1
        if (count == 32) break;  // If all are zeros, stop
    }
    printf("%d\n", count);
    return 0;
}