#include <stdio.h>
int main() {
    typedef struct student {
        int rnum;
        char name[25];
        float marks;
    } student;
    int n;
    scanf("%d", &n);
    student srr[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &srr[i].rnum);
        scanf("%s", srr[i].name);
        scanf("%f", &srr[i].marks);
    }
    for (int i = 0; i < n; i++) {
        if (srr[i].marks>=85){
        printf("Roll Number: %d, Name: %s, Grade: %c\n", srr[i].rnum, srr[i].name,'A');
        }
        else if (srr[i].marks>84 && srr[i].marks<70){
        printf("Roll Number: %d, Name: %s, Grade: %c\n", srr[i].rnum, srr[i].name,'B');
        }
        else{
        printf("Roll Number: %d, Name: %s, Grade: %c\n", srr[i].rnum, srr[i].name,'C');

        }
    }
    return 0;
}