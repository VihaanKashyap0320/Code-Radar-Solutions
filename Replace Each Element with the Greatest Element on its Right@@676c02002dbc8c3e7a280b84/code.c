#include <stdio.h>{
    int n;
    scanf("%d",&n)l
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if (arr[i]<arr[i-1]){
            arr[i]=arr[i+1];
        }
        else {
            arr[i]=-1;
        }
    }    
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}