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
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &arr[i].rnum, arr[i].name, &arr[i].marks);
        sum += arr[i].marks; 
    }
    float avg = sum / n;
    printf("Average Marks: %.2f\n", avg);
 return 0;
}