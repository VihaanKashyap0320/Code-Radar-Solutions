#include<stdio.h>
int main(){
    int n;
    int ispalin=1;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0,j=n-1;i<j;i++,j--){
        if (arr[i]!=arr[j]){
            ispalin=0;
            break;
        }
    }
    if (ispalin==1){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}