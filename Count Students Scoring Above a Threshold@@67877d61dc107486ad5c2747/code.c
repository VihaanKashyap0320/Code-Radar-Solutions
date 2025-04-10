#include <stdio.h>
typedef struct {
    int rnum;
    char name[25];
    float marks;
} Student;
int main() {
    int n,count=0;
    float find;
    scanf("%d", &n); 
    Student arr[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &arr[i].rnum, arr[i].name, &arr[i].marks);
    }
    scanf("%d",find);
    for (int i = 0; i < n; i++) {
        if(arr[i].marks>find){
            count++;
        }
    }
    printf("Count of students scorning above %.2f: %d",find,count);
 return 0;
}