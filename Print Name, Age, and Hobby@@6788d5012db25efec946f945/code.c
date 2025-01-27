#include <stdio.h>
int main() {
    char name[50];  // To store the user's name
    int age;        // To store the user's age
    char hobby[50]; // To store the user's favorite hobby
    scanf("%s", name); // Reading a single word as a name
    scanf("%d", &age); // Reading age
    scanf("%s", hobby); // Reading a single word as a hobby
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;
}