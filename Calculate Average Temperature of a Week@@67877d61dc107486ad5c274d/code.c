#include <stdio.h>
int main() {
    typedef struct {
        char day[15];
        int temp;
    } Day;
    int sum = 0;
    float avg = 0;
    Day arr[7];
    for (int i = 0; i < 7; i++) {
        scanf("%s %d", arr[i].day, &arr[i].temp);
        sum += arr[i].temp;
    }
    avg = sum / 7.0;
    printf("Average Temperature: %.2f\n", avg);
    return 0;
}