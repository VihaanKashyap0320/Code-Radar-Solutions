#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enetr 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    float c=(a+b+c)/3.0;
    printf("Average: %.2f\n",c);
    return 0;
}