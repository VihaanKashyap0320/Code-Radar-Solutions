#include<stdio.h>
#include<limits.h>
int main(){
    int max=INT_MIN;
    int smax=INT_MIN;
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }

    }
   for (int i=0;i<n;i++){
        if (arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }
        else{
            smax=-1;
        }
    }
    printf("%d",smax);
    return 0;
}