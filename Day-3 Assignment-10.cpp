#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int i, j;
    char temp;
    i = 0;
    j = strlen(str) - 1;
    while (i < j) {
        temp = *(str + i);
        *(str + i) = *(str + j);
        *(str + j) = temp;
        i++;
        j--;
    }
}

int main() {
    char str[100];
    printf("Enter any string: ");
    scanf("%s", str);
    reverseString(str);
    printf("The Reverse of the String [%s] is :: %s\n", str, str);
    return 0;
}
