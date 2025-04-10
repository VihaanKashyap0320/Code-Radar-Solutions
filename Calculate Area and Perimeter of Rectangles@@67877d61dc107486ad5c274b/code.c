#include<stdio.h>
int main(){
    typedef struct {
    int length;
    int breadth;
    } Rectangle ;
    int n,area,perimeter;
    scanf("%d",&n);
    Rectangle arr[n];
    for (int i=0;i<n;i++){
        scanf("%d %d",&length,&breadth);
    }
    for (int i=1;i<n+1;i++){
        area=arr[i].length*arr[i].breadth;
        perimeter=2*(arr[i].length+arr[i].breadth);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f",i,area,perimeter);
    }
    return 0;
}