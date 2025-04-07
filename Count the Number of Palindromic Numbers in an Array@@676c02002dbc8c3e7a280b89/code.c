#include<stdio.h>
int isprime(int x){
    int r=0;
    while (x!=0){
        r=r*10 + x%10;
        x=x/10;
    }
    if (x==r) return 1;
    else return 0;
}
int main(){
    int n,k,count=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        isprime(arr[i]);
        if (isprime) count++;
    }
    if (count>=1) printf("%d",count);
    else printf("0");
    return 0;
}