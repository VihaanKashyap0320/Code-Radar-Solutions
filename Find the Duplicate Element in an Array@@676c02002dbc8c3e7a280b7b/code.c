// Your code here...
#include<stdio.h>
int main(){
    int n;
    int count=0;
    scnaf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if (arr[i]==arr[i+1]){
            count++;
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}