#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int i, j;
    char temp;
    int n = strlen(str);
    for (i = 0, j = n - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    reverseString(str);
    printf("Reversed string: %s", str);
    return 0;
}
