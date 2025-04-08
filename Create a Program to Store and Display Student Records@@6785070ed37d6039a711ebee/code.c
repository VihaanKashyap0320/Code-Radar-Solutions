#include<stdio.h>
int main(){
    typedef struct student{
        int rollnumber;
        char name[25];
        float marks;
    } student;
    int n;
    scanf("%d",&n);
    student srr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&srr[i].rollnumber);
        scanf("%s",srr[i].name);
        scanf("%f",srr[i].marks);
    }
    for (int i=0;i<n;i++){
        printf("%Roll Number: %d, Name: %s, Marks: %.2f",srr[i].rollnumber,srr[i].name,srr[i].marks);
    }
    return 0;
}