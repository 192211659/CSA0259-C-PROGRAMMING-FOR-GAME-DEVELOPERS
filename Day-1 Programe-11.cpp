#include <stdio.h>

int main() {
    int start, end, count = 0, sum = 0;
    
    // get the starting and ending values
    printf("Enter the starting and ending values: ");
    scanf("%d %d", &start, &end);
    
    // loop through the range and count the divisible numbers
    for (int i = start; i <= end; i++) {
        if (i % 5 == 0) {
            count++;
            sum += i;
        }
    }
    
    // print the results
    printf("The number of integers divisible by 5 between %d and %d is %d\n", start, end, count);
    printf("The sum of integers divisible by 5 between %d and %d is %d", start, end, sum);
    
    return 0;
}
