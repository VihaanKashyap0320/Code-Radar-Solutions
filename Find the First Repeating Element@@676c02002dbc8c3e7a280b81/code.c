// Your code here...
#include<stdio.h>
int main(){
    int n;
    int count =0;
    int var=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<=n;i++){
        if (arr[i]==arr[i+1]){
            count++;
            var=arr[i];
            return 0;
        }
    }
    printf("%d",var);
    return 0;
}