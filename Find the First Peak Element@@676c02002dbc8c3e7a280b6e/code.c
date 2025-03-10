#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);  // Read the size of the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read the array elements
    }
    // Edge Case: If there's only one element, it's a peak
    if (n == 1) {
        printf("%d\n", arr[0]);
        return 0;
    }
    // Traverse the array to find the first peak element
    for (int i = 0; i < n; i++) {
        // First element check
        if (i == 0 && arr[i] > arr[i + 1]) {
            printf("%d\n", arr[i]);
            return 0;
        }
        // Last element check
        else if (i == n - 1 && arr[i] > arr[i - 1]) {
            printf("%d\n", arr[i]);
            return 0;
        }
        // Middle elements check
        else if (i > 0 && i < n - 1 && arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d\n", arr[i]);
            return 0;
        }
    }
    // If no peak element is found
    printf("-1\n");
    return 0;
}