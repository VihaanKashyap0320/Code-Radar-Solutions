// Your code here...
#include <stdio.h>
int main() {
    int n,target;;
    scanf("%d", &n);  // Read the size of the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read the array elements
    }
    for (int i=0;i<n;i++){
        if (target == arr[i]){
            printf("%d",i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}