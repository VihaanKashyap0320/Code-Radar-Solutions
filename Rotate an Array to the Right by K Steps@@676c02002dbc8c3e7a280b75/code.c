// Your code here...
#include<stdio.h>

void newreverse(int arr[], int si, int ei) {
    for (int i = si, j = ei; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter number of rotations: ");
    scanf("%d", &k);
    k = k % n; // Handle cases where k >= n

    newreverse(arr, 0, n - 1);
    newreverse(arr, 0, k - 1);
    newreverse(arr, k, n - 1);

    for (int i = 0; i < n; i++) { // Fixed the condition
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}