// Your code here...
#include<stdio.h>
int main(){
    int n;
    int count=0;
    int var=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    if (n%2==0){
        var=(arr[(n/2)-1] + arr[(n/2)+1]) /2;
    }
    else{
        var=arr[(n/2)+1];
    }
    printf("%d",var);
    return 0;
}