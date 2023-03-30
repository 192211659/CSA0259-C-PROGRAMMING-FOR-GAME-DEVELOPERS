#include <stdio.h>

int sum_of_digits(int num);

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Sum of digits of %d = %d", num, sum_of_digits(num));

    return 0;
}

int sum_of_digits(int num) {
    if (num == 0) {
        return 0;
    } else {
        return (num % 10) + sum_of_digits(num / 10);
    }
}
