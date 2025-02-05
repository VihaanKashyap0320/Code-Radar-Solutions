#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n>=1 && n<=7){
        if (n==1){
            printf("Monday");
        }
        else if(n==2){
            printf("Tuesday");
        }
        else if (n==3){
            printf("Wednesday");
        }
        else if (n==4){
            printf("Thursday");
        }
        else if(n==5){
            printf("Friday");
        }
        else if(n==6){
            printf("Saturday");
        }
        else if(n==0){
            printf("Invalid");
        }
        else {
            printf("Sunday");
        }
    }
    else {
        printf("Invalid");
    }
    return 0;
}