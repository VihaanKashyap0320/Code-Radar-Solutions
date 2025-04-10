#include <stdio.h>
#include <string.h>
typedef struct student {
    int rnum;
    char name[100];
    float marks;
} student;
int main() {
    int n,sum=0,avg=0;
    scanf("%d", &n);
    student arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &arr[i].rnum, arr[i].name, &arr[i].marks);
    }
    for (int i = 0; i < n; i++) {
        sum+=arr[i].marks
    avg=sum/n;
    printf("%.2f",avg);
    return 0;
}