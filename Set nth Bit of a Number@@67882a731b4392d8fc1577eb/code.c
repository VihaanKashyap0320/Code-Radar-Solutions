#include <stdio.h>
int main() {
    int num, n;
    scanf("%d %d", &num, &n); 
    num = num | (1 << n);  // Shift 1 to the nth position and OR with num
    printf("%d\n", num);
    return 0;
}