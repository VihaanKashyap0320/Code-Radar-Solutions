#include <stdio.h>
#include <string.h>
typedef struct student {
    int rnum;
    char name[100];
    float marks;
} student;
int main() {
    int n;
    scanf("%d", &n);
    student arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &arr[i].rnum, arr[i].name, &arr[i].marks);
    }
    for (int i = 0; i < n; i++) {
        printf("%d %s %.2f\n", arr[i].rnum, arr[i].name, arr[i].marks);
    }
    return 0;
}