// Your code here...
#include <stdio.h>
int main() {
    int n,cee=0,codd=0;
    scanf("%d", &n);  // Read the size of the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read the array elements
    }
        for (int i = 0; i < n; i++) {
            if (arr[i]%2==0){
                cee++;
            }
            else{
                codd++;
            }
        }
    printf("%d ",cee);
    printf("%d ",codd);
    return 0;
}