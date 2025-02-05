#include <stdio.h>
int main() {
    int m,n;
    scanf("%d",&n);
    for(int i=1 ; i<=n; i++){
        for (int j=1 ; j<=n; j++){
            if (i==m || i==1 || j==n || j==1){
                printf(" * ");
            }
            // else{
            //     printf(" ");
            // }
        }
        printf("\n");
    }
    return 0;
}