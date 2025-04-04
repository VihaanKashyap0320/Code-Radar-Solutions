// Your code here...
#include<stdio.h>
int sum(int n){
    int r=0;
    while(n!=0){
        r = r*10 + n%10;
        n/10;
    }
    return r;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d",sum(arr[i]));
    }
    return 0;
}