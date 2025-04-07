#include <stdio.h>
int main() {
    int n,inc=0,dec-0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n-1; i++) {
        if (arr[i+1]>arr[i]){
            inc++;
        }
    }
    for (int i = 0; i < n-1; i++) {
        if (arr[i+1]<arr[i]){
            dec++;
        }
    }
    if (inc) printf("%d",inc);
    else printf("%d",dec);
    return 0;
}