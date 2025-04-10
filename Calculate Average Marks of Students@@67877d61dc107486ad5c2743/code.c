#include <stdio.h>
typedef struct {
    int rnum;
    char name[25];
    float marks;
} Student;
int main() {
    int n;
    scanf("%d", &n); // Input number of students
    Student arr[n]; // Declare array of students
    float sum = 0.0;
    // Input student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &arr[i].rnum, arr[i].name, &arr[i].marks);
        sum += arr[i].marks; // Add marks to sum
    }
    float avg = sum / n;
    printf("Average Marks: %.2f\n", avg);
 return 0;
}