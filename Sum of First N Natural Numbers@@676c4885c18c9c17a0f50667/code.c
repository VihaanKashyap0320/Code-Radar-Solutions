#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int s=1;
    for (int i=1;i<=n;i++){
        s+=1;
    }
    printf("%d",s);
    return 0;
}