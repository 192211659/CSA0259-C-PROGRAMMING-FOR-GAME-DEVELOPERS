#include <stdio.h>

int minJumps(int arr[], int n);

int main() {
    int arr[] = {2, 3, 1, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minJumpsRequired = minJumps(arr, n);

    if (minJumpsRequired == -1) {
        printf("End is not reachable.\n");
    } else {
        printf("Minimum number of jumps required: %d\n", minJumpsRequired);
    }

    return 0;
}

int minJumps(int arr[], int n) {
    if (n == 0 || arr[0] == 0) {
        return -1;
    }

    int maxReach = arr[0];
    int stepsLeft = arr[0];
    int jumps = 1;

    for (int i = 1; i < n; i++) {
        if (i == n - 1) {
            return jumps;
        }

        maxReach = (maxReach > i + arr[i]) ? maxReach : i + arr[i];
        stepsLeft--;

        if (stepsLeft == 0) {
            jumps++;

            if (i >= maxReach) {
                return -1;
            }

            stepsLeft = maxReach - i;
        }
    }

    return 0;
}
