#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=INT_MAX;
    int smin=INT_MAX;
    for (int i=0;i<n;i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
        for (int i=0;i<n;i++){
        if (arr[i]<smin && arr[i]!=min){
            smin=arr[i];
        }
    }
        if (smin == INT_MAX) {
        printf("-1\n"); // No second largest found
    } else {
        printf("%d\n", smin);
    }

    return 0;
}