#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Taking input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Replacing each element with the greatest on its right
    for (int i = 0; i < n - 1; i++) {
        int max = arr[i + 1];
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        printf("%d ", max);
    }

    // Last element is always -1
    printf("-1\n");

    return 0;
}