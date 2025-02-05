#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a%b==0 && a=b*b){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}