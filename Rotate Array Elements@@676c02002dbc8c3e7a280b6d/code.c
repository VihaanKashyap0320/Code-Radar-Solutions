// Your code here...
#include<stdio.h>
void newreverse(arr[],int si,int ei){
    for (int i=si,j=ei;i<j;i++,j--){
        int temp=arr[j];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
    int n,k;
    scanf("%d",&n); // size of array
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    if (k>n) k=k%n;
    newreverse(arr,0,n-1);
    newreverse(arr,0,k-1);
    newreverse(arr,k,n-1);
    return 0;
}
