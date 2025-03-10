// Your code here...
#include<stdio.h>
int main(){
    int n;
    int num=0;
    int y=1;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n-1;i++){
        if (arr[i]<arr[i+1]){
            num=arr[i+1];
            y=1;
        }
        else{
            y=0;
        }
    }
    if (y==1){
        printf("%d",num);
    }
    return 0;
}