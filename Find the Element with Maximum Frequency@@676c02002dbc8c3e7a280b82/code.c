// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N], freq[1001] = {0};  // assuming the elements are between 0 and 1000
    int i, maxFreq = 0, result = 1001;  // result starts higher than the largest possible element

    // Input the array elements
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;  // count the frequency of each element
    }

    // Find the element with the highest frequency and smallest value
    for(i = 0; i < N; i++) {
        if(freq[arr[i]] > maxFreq || (freq[arr[i]] == maxFreq && arr[i] < result)) {
            maxFreq = freq[arr[i]];
            result = arr[i];
        }
    }

    // Output the result
    printf("%d\n", result);

    return 0;
}