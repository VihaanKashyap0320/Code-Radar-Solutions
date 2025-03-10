// Your code here...
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);  
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {  // If any element is greater than the next one, it's not sorted
            printf("Not Sorted\n");
            return 0;
        }
    }
    printf("Sorted\n");  
    return 0;
} 