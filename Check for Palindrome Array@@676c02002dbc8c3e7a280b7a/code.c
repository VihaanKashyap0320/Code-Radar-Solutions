#include<stdio.h>
int main(){
    int n;
    int ispalin=1;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0,j=n;i<j;i++,j--){
        if (arr[i]!=arr[j]){
            ispalin=0;
            break;
        }
    }
    if (ispalin){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}