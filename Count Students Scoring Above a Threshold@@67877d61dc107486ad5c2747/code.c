#include <stdio.h>
typedef struct {
    int rnum;
    char name[25];
    float marks;
} Student;
int main() {
    int n;
    scanf("%d", &n);
    Student arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &arr[i].rnum, arr[i].name, &arr[i].marks);
    }
    float threshold;
    scanf("%f", &threshold);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].marks > threshold) {
            count++;
        }
    }
    printf("Count of students scoring above %.2f: %d\n", threshold, count);
    return 0;
}