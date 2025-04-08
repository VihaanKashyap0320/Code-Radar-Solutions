#include <stdio.h>
#include <limits.h>
int main() {
    int n, max = INT_MIN, found = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (arr[i] > max) {
                max = arr[i];
                found = 1;
            }
        }
    }
    if (found)
        printf("%d\n", max);
    else
        printf("-1\n");
    return 0;
}