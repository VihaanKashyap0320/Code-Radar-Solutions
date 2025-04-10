#include<stdio.h>
int main(){
    typedef struct {
        char day[15];
        int temp;
    } Day;
    int sum;
    float avg;
    char Day[7];
    for (int i=0;i<n;i++){
        scanf("%s &d",Day[i].day,&temp);
        sum+=arr[i].temp;
    }
    avg=sum/7;
    printf("%.2f",avg);
    return 0;
}