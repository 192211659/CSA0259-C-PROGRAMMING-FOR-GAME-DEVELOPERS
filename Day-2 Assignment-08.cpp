#include <stdio.h>

int main() {
    int arr[] = {2, 3, 2, 4, 5, 4, 6, 4, 5, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[n];
    int visited[n];

    // Initialize freq[] to 0
    for (int i = 0; i < n; i++) {
        freq[i] = 0;
    }

    // Initialize visited[] to -1
    for (int i = 0; i < n; i++) {
        visited[i] = -1;
    }

    // Calculate frequency of each element
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 0;
            }
        }
        if (visited[i] != 0) {
            visited[i] = 1;
            freq[i] = count;
        }
    }

    // Print frequency of each element
    printf("Frequency of each element:\n");
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
