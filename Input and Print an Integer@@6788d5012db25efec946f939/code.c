#include <stdio.h>

int main() {
    int ch;
    scanf(" %d", &ch);  // The space before %c helps skip any leftover newline characters

    printf("You entered: %d\n", ch);
    return 0;
}