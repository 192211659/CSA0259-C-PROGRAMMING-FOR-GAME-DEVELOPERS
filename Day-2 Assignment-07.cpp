#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int is_palindrome = 1;

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("The array is a palindrome array.\n");
    } else {
        printf("The array is not a palindrome array.\n");
    }

    return 0;
}
