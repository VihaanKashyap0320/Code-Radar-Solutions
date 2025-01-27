#include <stdio.h>
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 >= num2) {
        printf("True\n"); // Output 'True' if the condition is met
    } else {
        printf("False\n"); // Output 'False' otherwise
    }
    return 0;
}