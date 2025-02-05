#include<stdio.h>
int main() {   
    int n;
    scanf("%d", &n);
    int nsp = n / 2;  // Number of spaces
    int nst = 1;      // Number of stars
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= nsp; j++) {   
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= nst; k++) {
            printf("*");
        }
        printf("\n");
        printf("\n");
        // Update `nsp` and `nst` after each row
        if (i < n / 2 + 1) {  // Upper half (including middle row)
            nsp--;
            nst += 2;
        } else {  // Lower half
            nsp++;
            nst -= 2;
        }
    }
    return 0;
}
