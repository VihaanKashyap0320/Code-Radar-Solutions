#include <stdio.h>
int main() {
    int n;
    scanf("$d",&n);
    for (int i ; i<=n ; i++){
        for (int j ; j<n-i ; j++){
            printf(" ");
        }
        for (int k;k<=n+1;k++){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}