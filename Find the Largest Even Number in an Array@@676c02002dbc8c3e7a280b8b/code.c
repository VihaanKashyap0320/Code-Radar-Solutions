#include<stdio.h>
#include<limits.h>
int main(){
    int n,codd=0,max=INT_MIN;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if (arr[i]%2!=0){
            codd=1;
        } 
        else {
            for (int i=0;i<n;i++){
                if (arr[i]>max){
                    max=arr[i];
                }
            }
        }
    }
    if (codd) printf("-1");
    else if (max%2==0) printf("%d",max);
    return 0;
}