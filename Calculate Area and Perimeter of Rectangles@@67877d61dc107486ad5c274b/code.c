#include<stdio.h>
int main(){
    typedef struct {
    int length;
    int breadth;
    } Rectangle ;
    int n;
    float area, perimeter;
    scanf("%d",&n);
    Rectangle arr[n];
    for (int i=0;i<n;i++){
        scanf("%d %d",&arr[i].length,&arr[i].breadth);
    }
    for (int i=1;i<n+1;i++){
        area=arr[i].length * arr[i].breadth;
        perimeter=2*(arr[i].length + arr[i].breadth);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",i,area,perimeter);
    }
    return 0;
}