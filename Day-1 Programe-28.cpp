#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("The ASCII value of %c is %d", c, (int)c);
    return 0;
}
