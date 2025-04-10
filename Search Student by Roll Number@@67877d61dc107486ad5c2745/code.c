#include <stdio.h>
#include <string.h>
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
    int rfind;
    scanf("%d", &rfind);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].rnum == rfind) {
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n", arr[i].rnum, arr[i].name, arr[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found\n");
    }

    return 0;
}