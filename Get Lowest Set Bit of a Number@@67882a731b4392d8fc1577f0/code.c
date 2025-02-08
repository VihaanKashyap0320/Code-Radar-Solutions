#include <stdio.h>
int main() {
    int num, p = 0;
    scanf("%d", &num);
    while ((num & 1) == 0) {
        num = num >> 1;  
        p++;           
    }    
    return 0;
}