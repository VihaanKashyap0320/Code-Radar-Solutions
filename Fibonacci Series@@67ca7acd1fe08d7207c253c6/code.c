// Your code here...
void fibonacciSeries(int n){
    int a=0,b=0,sum=1;
    for(int i=0;i<=n-1;i++){
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b= sum;
    }
    return;
}