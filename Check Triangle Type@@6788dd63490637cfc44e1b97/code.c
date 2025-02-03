#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d");
    if (a==b && a==c && b==c)
    {
        printf("Equilateral");
    }
    else if ( (a==b && b!=c) || (b==c && a!=c ) || ( a==c && a!=b) )
    {
        printf("Isosceles");
    }
    else if (a!=b && b!=c a!=c)
    {
        printf("Scalene");
    }
    return 0;
}