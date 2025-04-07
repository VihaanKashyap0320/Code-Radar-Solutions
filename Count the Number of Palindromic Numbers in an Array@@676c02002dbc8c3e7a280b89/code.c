#include <stdio.h>
int isPalindrome(int x) {
    int original = x, r = 0;
    while (x > 0) {
        r = r * 10 + x % 10;
        x = x / 10;
    }
    return original == r;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}