#include <stdio.h>
#include <string.h>
typedef struct student {
    int rnum;
    char name[100];
    float marks;
} Student;
int main() {
    int n;
    scanf("%d", &n);
    Student arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &arr[i].rnum, arr[i].name, &arr[i].marks);
    }
    int topIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i].marks < arr[topIndex].marks) {
            topIndex = i;
        }
    }
    printf("Top Scorer: ");
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n", arr[topIndex].rnum, arr[topIndex].name, arr[topIndex].marks);
    return 0;
}