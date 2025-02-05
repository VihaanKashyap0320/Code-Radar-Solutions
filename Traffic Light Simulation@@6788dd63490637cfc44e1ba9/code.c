#include <stdio.h>
int main() {
    char grade;
    scanf(" %c", &grade);  // Read a single character input

    if (grade == 'R')
        printf("Stop\n");
    else if (grade == 'G')
        printf("Go\n");
    else if (grade == 'Y')
        printf("Slow Down\n");
    else
        printf("Invalid input\n");

    return 0;
}