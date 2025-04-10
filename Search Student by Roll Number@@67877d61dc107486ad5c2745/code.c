#include <stdio.h>
typedef struct {
    int rnum;
    char name[25];
    float marks;
} Student;
int main() {
    int n,rfind,roll=0;;
    scanf("%d", &n); 
    Student arr[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &arr[i].rnum, arr[i].name, &arr[i].marks);
    }
    scanf("%d",&rfind);
    for (int i = 0; i < n; i++) {
        if (arr[i].rnum==rfind){
            roll=1;
            printf("Roll Number: %d, Name: %s, Marks: %.2f",arr[i].rnum,arr[i].name,arr[i].marks);
            break;
        }
    }
    printf("Student Not found");
    return 0;
}