#include <stdio.h>
int main() {
    int n,inc=0,dec=0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (n==1) printf("YES");
    else {
        for (int i = 0; i < n-1; i++) {
        if (arr[i]<=arr[i+1]){
            inc++;
        }
    }
        for (int i = 0; i < n-1; i++) {
        if (arr[i]>=arr[i+1]){
            dec++;
        }
    }
        if (inc) printf("YES");
        else if (dec) printf("YES");
        else printf("NO");
    }
    return 0;
}