// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]>=arr[j]){
                printf("Not Sorted\n");
                return 0;
            } 
            else {
                printf("Sorted\n");
                return 0;
            }
        }
    }
    return 0;
}