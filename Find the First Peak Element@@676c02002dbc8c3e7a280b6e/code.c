// Your code here...
#include<stdio.h>
int main(){
    int n;
    int num=0;
    int con=1;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n-1;i++){
        if ( arr[i]<arr[i+1] ){
            num=arr[i+1];
            con=1;
        }
        else if ( num==arr[i] && arr[i]>arr[i+1] ){
            con=1;
        }
        else{
            con=0;
        }

    }
    if (con==1){
        printf("%d",num);
    }
    else{
        printf("-1");
    }

    return 0;
}