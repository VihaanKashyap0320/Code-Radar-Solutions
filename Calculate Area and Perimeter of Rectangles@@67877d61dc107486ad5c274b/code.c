#include <stdio.h>
int main() {
    typedef struct {
        int length;
        int breadth;
    } Rectangle;
    int n;
    scanf("%d", &n);
    Rectangle arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i].length, &arr[i].breadth);
    }
    for (int i = 0; i < n; i++) {
        int area = arr[i].length * arr[i].breadth;
        int perimeter = 2 * (arr[i].length + arr[i].breadth);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i + 1, (float)area, (float)perimeter);
    }
    return 0;
}