// Your code here...
#include <stdio.h>

int main() {
    char c;
    printf("Captured Input:\n");
    while ((c = getchar()) != EOF) {  // Read character by character
        putchar(c);  // Print the hidden test case input
    }
    return 0;
}