#include <stdio.h>
int main() {
    typedef struct student {
        int rollnumber;
        char name[25];
        float marks;
    } student;
    int n;
    scanf("%d", &n);
    student srr[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &srr[i].rollnumber);
        scanf("%s", srr[i].name);
        scanf("%f", &srr[i].marks);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i].marks>=85){
        printf("Roll Number: %d, Name: %s, Grade: %c\n", arr[i].rnum, arr[i].name,'A');
        }
        else if (arr[i].marks>84 && arr[i].marks<=70){
        printf("Roll Number: %d, Name: %s, Grade: %c\n", arr[i].rnum, arr[i].name,'B');
        }
        else{
        printf("Roll Number: %d, Name: %s, Grade: %c\n", arr[i].rnum, arr[i].name,'C');

        }
    }
    return 0;
}