#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for (int i=0;i<5;i++){
        for (int j=i+1;j<5;j++){
            if (arr[i]>arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
    for (int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}