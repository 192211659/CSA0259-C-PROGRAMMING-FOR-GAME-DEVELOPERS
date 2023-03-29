#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {7, 2, 8, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_diff = INT_MIN;
    int min_elem = arr[0];

    for (int i = 1; i < n; i++) {
        int diff = arr[i] - min_elem;
        if (diff > max_diff) {
            max_diff = diff;
        }
        if (arr[i] < min_elem) {
            min_elem = arr[i];
        }
    }

    printf("The maximum difference between two elements is: %d\n", max_diff);

    return 0;
}
